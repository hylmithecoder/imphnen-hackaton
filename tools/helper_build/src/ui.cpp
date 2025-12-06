#include <ui.hpp>
#include <builder.hpp>

void HelperBuild::RunUI(const std::string& root_path) {
    using namespace ftxui;

    auto screen = ScreenInteractive::Fullscreen();

    std::string logs = "Ready.";
    int selected = 0;
    int selected_run = 0;

    std::vector<std::string> menu_entries = {
        "Build Web (Frontend + Backend)",
        "Build Frontend",
        "Build Backend",
        "Build Mobile",
        "Build All",        
        "Exit"
    };

    auto menu = Menu(&menu_entries, &selected);

    auto layout = Renderer(menu, [&] {
        return vbox({
            text("PROJECT BUILD HELPER") | bold | center,
            separator(),
            menu->Render() | frame | border,
            separator(),
            text("Logs:"),
            text(logs) | color(Color::BlueViolet),
        }) | border;
    });

    auto events = CatchEvent(layout, [&](Event event) {
        if (event == Event::Return) {
            switch (selected) {
                case 0: logs = BuildWeb(root_path); break;
                case 1: logs = BuildFrontend(root_path); break;
                case 2: logs = BuildBackend(root_path); break;
                case 3: logs = BuildMobile(root_path); break;
                case 4: logs = BuildAllProject(root_path); break;
                case 5: screen.ExitLoopClosure()(); break;
            }
            return true;
        }
        return false;
    });

    screen.Loop(events);
}

#include <builder.hpp>

bool HelperBuild::FolderExists(const string& path) {
    return filesystem::exists(path);
}

string HelperBuild::RunCmd(const string& cmd) {
    string full = cmd + "\n";
    int status = system(cmd.c_str());
    full += (status == 0 ? "[SUCCESS]" : "[FAILED]");
    return full;
}

string HelperBuild::BuildFrontend(const string& root) {
    string path = root + "/frontend";

    if (!FolderExists(path)) 
        return "Frontend folder not found.";

    return RunCmd("cd " + path + " && docker build -t frontend_app .");
}

string HelperBuild::BuildBackend(const string& root) {
    string path = root + "/backend";

    if (!FolderExists(path)) 
        return "Backend folder not found.";

    return RunCmd("cd " + path + " && docker build -t backend_app .");
}

string HelperBuild::BuildWeb(const string& root) {
    return RunCmd("docker compose up -d --build");
}

string HelperBuild::BuildMobile(const string& root) {
    string path = root + "/mobile";

    if (!FolderExists(path))
    {
        return "Mobile folder not found.";
    }

    return RunCmd("cd " + path + " && make");
}

string HelperBuild::BuildAllProject(const string& root) {
    return 
        "[FullStack]" + BuildWeb(root) +
        "\n\n[Mobile]\n" + BuildMobile(root);
}
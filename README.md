# Inventory System with Agentic AI

A full-stack inventory management system featuring a PHP backend, a Next.js frontend, and a .NET MAUI mobile app, designed to support Agentic AI integration.

## 🚀 Project Overview

This project is a hackathon submission (`imphnen-hackathon`) that provides a robust inventory management solution. It currently features:
- **Backend:** A native PHP REST API for handling inventory data and user authentication.
- **Frontend:** A modern Next.js 16 (React 19) application with TypeScript and Tailwind CSS 4 for a responsive user interface.
- **Mobile:** A .NET MAUI cross-platform mobile application.
- **Database:** MySQL for data persistence.

## 🛠 Tech Stack

### Frontend
- **Framework:** [Next.js 16](https://nextjs.org/)
- **Library:** [React 19](https://react.dev/)
- **Language:** TypeScript
- **Styling:** [Tailwind CSS 4](https://tailwindcss.com/)
- **Icons:** Lucide React
- **Authentication:** JWT (JSON Web Tokens) & Cookie handling

### Backend
- **Language:** PHP (Native)
- **Database:** MySQL
- **Driver:** MySQLi

### Mobile
- **Framework:** .NET MAUI
- **Language:** C#
- **Platform:** Cross-platform (Android, iOS, Windows, macOS)

## 📂 Project Structure

```
imphnen-hackathon/
├── backend/                  # PHP Backend
│   ├── accounts/             # Account management endpoints
│   ├── config/               # Configuration files
│   ├── get_allinform_database/ # Database info retrieval
│   ├── handler_request/      # Request handling logic
│   ├── register/             # Registration endpoints
│   ├── db.sql                # Database schema
│   ├── index.php             # Main entry point (Inventory API)
│   └── README.md
│
├── frontend/                 # Next.js Frontend
│   ├── public/               # Static assets
│   ├── src/                  # Source code (app, lib)
│   ├── tests/                # Testing files
│   ├── package.json          # Dependencies and scripts
│   └── README.md
│
├── mobile/                   # .NET MAUI Mobile App
│   ├── Components/           # Shared components
│   ├── Controls/             # Custom controls (e.g., SnackBar)
│   ├── GlobalVariables/      # Global state management
│   ├── Pages/                # App pages (Login, Main, Register, etc.)
│   ├── Platforms/            # Platform-specific implementations
│   ├── Resources/            # App resources (Images, Fonts, etc.)
│   ├── Utils/                # Utility classes
│   └── InventorySystem.sln   # Solution file
│
├── tools/                    # Utility tools
│   └── helper_build/         # C++ build helper
│
├── docker-compose.yml        # Docker composition
└── README.md                 # Project documentation
```

## 🏁 Getting Started

### Prerequisites

- **Node.js** (v20+ recommended) & npm/yarn/bun
- **PHP** (v8.0+ recommended)
- **MySQL** Server
- **.NET SDK** (for mobile development)

### 1. Database Setup

1. Create a MySQL database named `hackathon_imphnen`.
2. Import the necessary tables using `backend/db.sql` or manually create:
   - `inventory` table
   - `account` table

### 2. Backend Setup

1. Navigate to the `backend` directory:
   ```bash
   cd backend
   ```
2. Configure the database connection in `config/db.php`.
3. Start the PHP development server:
   ```bash
   php -S localhost:8000
   ```
   The API will be available at `http://localhost:8000`.

### 3. Frontend Setup

1. Navigate to the `frontend` directory:
   ```bash
   cd frontend
   ```
2. Install dependencies:
   ```bash
   npm install
   # or
   yarn install
   # or
   bun install
   ```
3. Run the development server:
   ```bash
   npm run dev
   ```
4. Open [http://localhost:3000](http://localhost:3000) in your browser.

### 4. Mobile Setup

1. Navigate to the `mobile` directory.
2. Open `InventorySystem.sln` in Visual Studio or VS Code.
3. Build and run on your desired emulator or device.

## 📄 License

MIT License

Copyright (c) 2024 Inventory System with Agentic AI

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

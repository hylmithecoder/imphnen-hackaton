# Inventory System with Agentic AI

A full-stack inventory management system featuring a PHP backend and a Next.js frontend, designed to support Agentic AI integration.

## 🚀 Project Overview

This project is a hackathon submission (`imphnen-hackathon`) that provides a robust inventory management solution. It currently features:
- **Backend:** A native PHP REST API for handling inventory data and user authentication.
- **Frontend:** A modern Next.js 16 (React 19) application with TypeScript and Tailwind CSS 4 for a responsive user interface.
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

## 📂 Project Structure

```
imphnen-hackathon/
├── backend/                  # PHP Backend
│   ├── accounts/             # Account management endpoints
│   │   └── index.php
│   ├── config/               # Configuration files
│   │   └── db.php            # Database connection
│   ├── index.php             # Main entry point (Inventory API)
│   └── README.md
│
├── frontend/                 # Next.js Frontend
│   ├── public/               # Static assets
│   ├── src/                  # Source code
│   ├── package.json          # Dependencies and scripts
│   └── README.md
│
└── README.md                 # Project documentation
```

## 🏁 Getting Started

### Prerequisites

- **Node.js** (v20+ recommended) & npm/yarn/bun
- **PHP** (v8.0+ recommended)
- **MySQL** Server

### 1. Database Setup

1. Create a MySQL database named `hackathon_imphnen`.
2. Import the necessary tables. Based on the code, you need:
   - `inventory` table
   - `account` table (columns: `ID`, `username`, `password`, `created_at`, `isAdmin`)

### 2. Backend Setup

1. Navigate to the `backend` directory:
   ```bash
   cd backend
   ```
2. Configure the database connection in `config/db.php` if your credentials differ from the default (`root` user, empty password):
   ```php
   $conn = mysqli_connect("localhost", "your_username", "your_password", "hackathon_imphnen");
   ```
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

## 🔌 API Endpoints

### Inventory (`backend/index.php`)

- **GET /**
  - Fetches inventory items.
  - Response: `{ "status": "success", "data": { ... } }`

### Accounts (`backend/accounts/index.php`)

- **GET /**
  - Fetches account details.
- **POST /**
  - Authenticates a user.
  - Body: `username`, `password`
  - Response: `{ "status": "success", "data": { ... } }` or error message.

## 📄 License

This project is for educational/hackathon purposes.

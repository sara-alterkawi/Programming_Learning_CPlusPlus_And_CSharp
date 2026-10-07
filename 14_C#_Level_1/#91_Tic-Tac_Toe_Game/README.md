# ❌⭕ Tic Tac Toe Game

📣 **Play a classic two-player Tic Tac Toe game and try to get three symbols in a row!**

---

## 🗝️ About This Project

**Tic Tac Toe Game** is a simple two-player desktop game developed using **C# and Windows Forms**.

The game is played on a **3×3 grid**, where **Player 1 uses X** and **Player 2 uses O**.

Players take turns selecting an empty cell. After each move, the game checks whether a player has completed a winning combination or whether the game has ended in a draw.

This project was developed as part of the **C# learning journey** to practice event-driven programming, conditional logic, game state management, and Windows Forms controls.

---

## 🎯 Project Objectives

The main objectives of this project are to:

* ❌⭕ Build a simple two-player Tic Tac Toe game.
* 🧠 Practice programming logic using C#.
* 🖥️ Create an interactive desktop application using Windows Forms.
* 🔄 Manage player turns and game states.
* 🏆 Detect winning combinations.
* 🤝 Detect draw situations.
* 🚫 Prevent players from selecting an occupied cell.
* 🔔 Display game notifications using `MessageBox`.
* 🔄 Reset the board and start a new game.
* ⚡ Handle user interactions through events.

---

## ✨ Features

The application includes:

* 🎮 **Two-Player Gameplay**

  * Player 1 plays with **X**.
  * Player 2 plays with **O**.

* 🔄 **Turn Management**

  * Players automatically switch turns after each valid move.
  * The current player's turn is displayed on the form.

* 🏆 **Win Detection**

  * Checks all possible winning combinations:

    * Horizontal rows
    * Vertical columns
    * Diagonals

* 🤝 **Draw Detection**

  * Detects when all nine cells are occupied without a winner.

* 🚫 **Occupied Cell Protection**

  * Prevents players from replacing an existing X or O.
  * Displays a notification when an occupied cell is clicked.

* 🆕 **New Game**

  * Resets all cells and starts a new game.

* 🔔 **Game Notifications**

  * Displays messages when a player wins or when the game ends in a draw.

---

## 📚 Concepts Practiced

This project focuses on practicing the following C# and Windows Forms concepts:

* 🔹 **Boolean Variables (`bool`)** for managing game state.
* 🔹 **Conditional Statements (`if / else`)** for controlling game logic.
* 🔹 **Event-Driven Programming** using button and label click events.
* 🔹 **`sender` Parameter** for identifying the clicked control.
* 🔹 **Type Casting** using `(Label)sender`.
* 🔹 **Label Controls** as interactive game cells.
* 🔹 **Game State Management** using variables such as `IsTurnPlayer1` and `IsGameOver`.
* 🔹 **Win Detection Logic** using multiple conditions.
* 🔹 **Draw Detection** by checking whether all cells are occupied.
* 🔹 **Method Organization** by separating game logic into methods.
* 🔹 **MessageBox** for displaying game notifications.
* 🔹 **Resetting Controls** to start a new game.
* 🔹 **Windows Forms UI Development**.

---

## 🧩 How It Works

### 1️⃣ Start a New Game

When the form is created, the `ResetGame()` method is called.

The method:

* Resets all nine cells to `?`.
* Sets Player 1 as the first player.
* Sets the game state to active.
* Displays **"Player 1's turn"**.

---

### 2️⃣ Select a Cell

When a player clicks one of the nine cells, the same click event handler is used.

The clicked label is identified using:

```csharp
Label clickedLabel = (Label)sender;
```

The program then checks whether the cell is empty.

If the cell contains `?`, the current player's symbol is placed inside it.

---

### 3️⃣ Switch Players

If it is Player 1's turn:

```csharp
clickedLabel.Text = "X";
IsTurnPlayer1 = false;
lbTurn.Text = "Player 2's turn";
```

Player 1 places **X**, and the turn changes to Player 2.

If it is Player 2's turn:

```csharp
clickedLabel.Text = "O";
IsTurnPlayer1 = true;
lbTurn.Text = "Player 1's turn";
```

Player 2 places **O**, and the turn changes back to Player 1.

---

### 4️⃣ Check for a Winner

After every valid move, the `WinLogic()` method is called.

The method checks all possible winning combinations.

There are **8 possible winning combinations**:

* 3 horizontal rows
* 3 vertical columns
* 2 diagonals

For example:

```text
X | X | X
---------
O | ? | O
---------
? | O | ?
```

Player 1 wins because the first row contains three X symbols.

---

### 5️⃣ Check for a Draw

If no player has won, the program checks whether all nine cells are occupied.

If none of the cells contains `?`, the game ends as a draw.

```text
X | O | X
---------
X | O | O
---------
O | X | X
```

The game displays:

**"It's a draw!"**

---

### 6️⃣ Prevent Selecting an Occupied Cell

Before placing a symbol, the program checks:

```csharp
if (clickedLabel.Text == "?")
```

If the cell is already occupied, the program does not change its value.

Instead, it displays:

```text
This cell is already taken. Please choose another one.
```

---

### 7️⃣ Start a New Game

The **New Game** button calls:

```csharp
ResetGame();
```

This clears the board, resets the player turn, and starts a new game.

---

## 🧠 Game State

The game uses two Boolean variables to control its state:

```csharp
bool IsTurnPlayer1 = true;
bool IsGameOver = true;
```

### `IsTurnPlayer1`

Determines whose turn it is:

* `true` → Player 1's turn.
* `false` → Player 2's turn.

### `IsGameOver`

Determines whether the game is still active:

* `true` → The game has ended.
* `false` → The game is still being played.

This prevents players from making additional moves after someone has won or the game has ended in a draw.

---

## 🛠️ Built With

* **C#**
* **Windows Forms (.NET)**
* **Visual Studio**

---

## ⬇️ How to Run

### Option 1 — Clone Using Git

If Git is installed, clone the repository


Then open the project in **Visual Studio**.

### Option 2 — Download ZIP

1. Open the repository on GitHub.
2. Click **Code**.
3. Select **Download ZIP**.
4. Extract the downloaded ZIP file.
5. Open the solution file in **Visual Studio**.
6. Press **F5** or click **Start** to run the application.

---

## 📬 Connect

* 🌐 **GitHub:** [Sara Alterkawi](https://github.com/sara-alterkawi)
* 💼 **LinkedIn:** [Sara Alterkawi](https://www.linkedin.com/in/sara-alterkawi/)

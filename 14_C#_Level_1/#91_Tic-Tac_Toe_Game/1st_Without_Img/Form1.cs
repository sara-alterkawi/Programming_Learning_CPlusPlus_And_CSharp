
namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        // Define whose turn it is
        bool IsTurnPlayer1 = true;

        // Define whether the game is over
        bool IsGameOver = true;

        public Form1()
        {
            InitializeComponent();

            // Start a new game
            ResetGame();
        }

        // Handle the click event for all game cells
        private void lblQ_Click(object sender, EventArgs e)
        {
            if (!IsGameOver)
            {
                Label clickedLabel = (Label)sender;

                // Check if the cell is empty
                if (clickedLabel.Text == "?")
                {
                    if (IsTurnPlayer1)
                    {
                        clickedLabel.Text = "X";
                        IsTurnPlayer1 = false;
                        lbTurn.Text = "Player 2's turn";
                    }
                    else
                    {
                        clickedLabel.Text = "O";
                        IsTurnPlayer1 = true;
                        lbTurn.Text = "Player 1's turn";
                    }

                    // Check if somebody won
                    WinLogic();
                }
                else
                {
                    // Show notification on the board
                    MessageBox.Show("This cell is already taken. Please choose another one.");
                }
            }
        }

        // Check all winning possibilities
        private void WinLogic()
        {
            // Player 1 - X
            if (
                (lblQ1.Text == "X" && lblQ2.Text == "X" && lblQ3.Text == "X") ||
                (lblQ4.Text == "X" && lblQ5.Text == "X" && lblQ6.Text == "X") ||
                (lblQ7.Text == "X" && lblQ8.Text == "X" && lblQ9.Text == "X") ||

                (lblQ1.Text == "X" && lblQ4.Text == "X" && lblQ7.Text == "X") ||
                (lblQ2.Text == "X" && lblQ5.Text == "X" && lblQ8.Text == "X") ||
                (lblQ3.Text == "X" && lblQ6.Text == "X" && lblQ9.Text == "X") ||

                (lblQ1.Text == "X" && lblQ5.Text == "X" && lblQ9.Text == "X") ||
                (lblQ3.Text == "X" && lblQ5.Text == "X" && lblQ7.Text == "X")
            )
            {
                lbTurn.Text = "Player 1 Wins!";
                MessageBox.Show("Player 1 wins!");
                IsGameOver = true;
                return;
            }

            // Player 2 - O
            if (
                (lblQ1.Text == "O" && lblQ2.Text == "O" && lblQ3.Text == "O") ||
                (lblQ4.Text == "O" && lblQ5.Text == "O" && lblQ6.Text == "O") ||
                (lblQ7.Text == "O" && lblQ8.Text == "O" && lblQ9.Text == "O") ||

                (lblQ1.Text == "O" && lblQ4.Text == "O" && lblQ7.Text == "O") ||
                (lblQ2.Text == "O" && lblQ5.Text == "O" && lblQ8.Text == "O") ||
                (lblQ3.Text == "O" && lblQ6.Text == "O" && lblQ9.Text == "O") ||

                (lblQ1.Text == "O" && lblQ5.Text == "O" && lblQ9.Text == "O") ||
                (lblQ3.Text == "O" && lblQ5.Text == "O" && lblQ7.Text == "O")
            )
            {
                lbTurn.Text = "Player 2 Wins!";
                MessageBox.Show("Player 2 wins!");
                IsGameOver = true;
                return;
            }

            // Check for a draw
            if (
                lblQ1.Text != "?" &&
                lblQ2.Text != "?" &&
                lblQ3.Text != "?" &&
                lblQ4.Text != "?" &&
                lblQ5.Text != "?" &&
                lblQ6.Text != "?" &&
                lblQ7.Text != "?" &&
                lblQ8.Text != "?" &&
                lblQ9.Text != "?"
            )
            {
                lbTurn.Text = "It's a Draw!";
                MessageBox.Show("It's a draw!");
                IsGameOver = true;
            }
        }

        // Reset the game
        private void ResetGame()
        {
            lblQ1.Text = "?";
            lblQ2.Text = "?";
            lblQ3.Text = "?";
            lblQ4.Text = "?";
            lblQ5.Text = "?";
            lblQ6.Text = "?";
            lblQ7.Text = "?";
            lblQ8.Text = "?";
            lblQ9.Text = "?";

            IsTurnPlayer1 = true;
            IsGameOver = false;

            lbTurn.Text = "Player 1's turn";
        }

        // Handle New Game button
        private void btnNewGame_Click(object sender, EventArgs e)
        {
            ResetGame();
        }
    }
}
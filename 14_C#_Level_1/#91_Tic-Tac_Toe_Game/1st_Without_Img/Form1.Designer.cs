namespace WinFormsApp1
{
    partial class Form1
    {
        private System.ComponentModel.IContainer components = null;

        private Label lblQ1;
        private Label lblQ2;
        private Label lblQ3;
        private Label lblQ4;
        private Label lblQ5;
        private Label lblQ6;
        private Label lblQ7;
        private Label lblQ8;
        private Label lblQ9;

        private Label lbTurn;
        private Button btnNewGame;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }

            base.Dispose(disposing);
        }

        private void InitializeComponent()
        {
            this.lblQ1 = new Label();
            this.lblQ2 = new Label();
            this.lblQ3 = new Label();
            this.lblQ4 = new Label();
            this.lblQ5 = new Label();
            this.lblQ6 = new Label();
            this.lblQ7 = new Label();
            this.lblQ8 = new Label();
            this.lblQ9 = new Label();

            this.lbTurn = new Label();
            this.btnNewGame = new Button();

            // 
            // Form1
            //
            this.ClientSize = new Size(500, 600);
            this.Text = "Tic Tac Toe";
            this.StartPosition = FormStartPosition.CenterScreen;

            // 
            // lbTurn
            //
            this.lbTurn.AutoSize = true;
            this.lbTurn.Font = new Font("Segoe UI", 16F, FontStyle.Bold);
            this.lbTurn.Location = new Point(150, 25);
            this.lbTurn.Text = "Player 1's turn";

            // 
            // Labels
            //
            Label[] cells =
            {
                lblQ1, lblQ2, lblQ3,
                lblQ4, lblQ5, lblQ6,
                lblQ7, lblQ8, lblQ9
            };

            int index = 0;

            for (int row = 0; row < 3; row++)
            {
                for (int col = 0; col < 3; col++)
                {
                    Label label = cells[index];

                    label.AutoSize = false;
                    label.BackColor = Color.White;
                    label.BorderStyle = BorderStyle.FixedSingle;
                    label.Font = new Font("Segoe UI", 32F, FontStyle.Bold);
                    label.Text = "?";
                    label.TextAlign = ContentAlignment.MiddleCenter;
                    label.Size = new Size(100, 100);

                    label.Location = new Point(
                        100 + (col * 100),
                        100 + (row * 100)
                    );

                    label.Click += new EventHandler(this.lblQ_Click);

                    this.Controls.Add(label);

                    index++;
                }
            }

            // 
            // btnNewGame
            //
            this.btnNewGame.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            this.btnNewGame.Location = new Point(170, 450);
            this.btnNewGame.Size = new Size(160, 45);
            this.btnNewGame.Text = "New Game";
            this.btnNewGame.UseVisualStyleBackColor = true;

            this.btnNewGame.Click += new EventHandler(this.btnNewGame_Click);

            // Add controls
            this.Controls.Add(this.lbTurn);
            this.Controls.Add(this.btnNewGame);

            this.ResumeLayout(false);
            this.PerformLayout();
        }
    }
}
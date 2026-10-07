namespace WinFormsApp2
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            trackBarRed = new TrackBar();
            trackBarGreen = new TrackBar();
            trackBarBlue = new TrackBar();
            lblRed = new Label();
            lblGreen = new Label();
            lblBlue = new Label();
            lblRedValue = new Label();
            lblGreenValue = new Label();
            lblBlueValue = new Label();
            lblBack = new Label();
            ((System.ComponentModel.ISupportInitialize)trackBarRed).BeginInit();
            ((System.ComponentModel.ISupportInitialize)trackBarGreen).BeginInit();
            ((System.ComponentModel.ISupportInitialize)trackBarBlue).BeginInit();
            SuspendLayout();
            // 
            // trackBarRed
            // 
            trackBarRed.Location = new Point(335, 126);
            trackBarRed.Maximum = 255;
            trackBarRed.Name = "trackBarRed";
            trackBarRed.Size = new Size(264, 69);
            trackBarRed.TabIndex = 0;
            trackBarRed.Scroll += trackBarRed_Scroll;
            // 
            // trackBarGreen
            // 
            trackBarGreen.Location = new Point(335, 201);
            trackBarGreen.Maximum = 255;
            trackBarGreen.Name = "trackBarGreen";
            trackBarGreen.Size = new Size(264, 69);
            trackBarGreen.TabIndex = 1;
            trackBarGreen.Scroll += trackBarGreen_Scroll;
            // 
            // trackBarBlue
            // 
            trackBarBlue.Location = new Point(335, 276);
            trackBarBlue.Maximum = 255;
            trackBarBlue.Name = "trackBarBlue";
            trackBarBlue.Size = new Size(264, 69);
            trackBarBlue.TabIndex = 2;
            trackBarBlue.Scroll += trackBarblue_Scroll;
            // 
            // lblRed
            // 
            lblRed.AutoSize = true;
            lblRed.BackColor = Color.Red;
            lblRed.Font = new Font("Showcard Gothic", 12F);
            lblRed.ForeColor = Color.Transparent;
            lblRed.Location = new Point(231, 126);
            lblRed.Name = "lblRed";
            lblRed.Size = new Size(59, 30);
            lblRed.TabIndex = 3;
            lblRed.Text = "Red";
            // 
            // lblGreen
            // 
            lblGreen.AutoSize = true;
            lblGreen.BackColor = Color.ForestGreen;
            lblGreen.Font = new Font("Showcard Gothic", 12F);
            lblGreen.ForeColor = Color.Transparent;
            lblGreen.Location = new Point(231, 201);
            lblGreen.Name = "lblGreen";
            lblGreen.Size = new Size(86, 30);
            lblGreen.TabIndex = 4;
            lblGreen.Text = "Green";
            // 
            // lblBlue
            // 
            lblBlue.AutoSize = true;
            lblBlue.BackColor = Color.SteelBlue;
            lblBlue.Font = new Font("Showcard Gothic", 12F);
            lblBlue.ForeColor = Color.Transparent;
            lblBlue.Location = new Point(231, 276);
            lblBlue.Name = "lblBlue";
            lblBlue.Size = new Size(72, 30);
            lblBlue.TabIndex = 5;
            lblBlue.Text = "Blue";
            // 
            // lblRedValue
            // 
            lblRedValue.AutoSize = true;
            lblRedValue.Location = new Point(624, 121);
            lblRedValue.Name = "lblRedValue";
            lblRedValue.Size = new Size(22, 25);
            lblRedValue.TabIndex = 6;
            lblRedValue.Text = "0";
            // 
            // lblGreenValue
            // 
            lblGreenValue.AutoSize = true;
            lblGreenValue.Location = new Point(624, 201);
            lblGreenValue.Name = "lblGreenValue";
            lblGreenValue.Size = new Size(22, 25);
            lblGreenValue.TabIndex = 7;
            lblGreenValue.Text = "0";
            // 
            // lblBlueValue
            // 
            lblBlueValue.AutoSize = true;
            lblBlueValue.Location = new Point(624, 271);
            lblBlueValue.Name = "lblBlueValue";
            lblBlueValue.Size = new Size(22, 25);
            lblBlueValue.TabIndex = 8;
            lblBlueValue.Text = "0";
            // 
            // lblBack
            // 
            lblBack.AutoSize = true;
            lblBack.BackColor = Color.White;
            lblBack.Font = new Font("Showcard Gothic", 20F, FontStyle.Regular, GraphicsUnit.Point, 0);
            lblBack.Location = new Point(138, 29);
            lblBack.Name = "lblBack";
            lblBack.Size = new Size(567, 50);
            lblBack.TabIndex = 9;
            lblBack.Text = "RGB Backgroung changer";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(lblBack);
            Controls.Add(lblBlueValue);
            Controls.Add(lblGreenValue);
            Controls.Add(lblRedValue);
            Controls.Add(lblBlue);
            Controls.Add(lblGreen);
            Controls.Add(lblRed);
            Controls.Add(trackBarBlue);
            Controls.Add(trackBarGreen);
            Controls.Add(trackBarRed);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)trackBarRed).EndInit();
            ((System.ComponentModel.ISupportInitialize)trackBarGreen).EndInit();
            ((System.ComponentModel.ISupportInitialize)trackBarBlue).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TrackBar trackBarRed;
        private TrackBar trackBarGreen;
        private TrackBar trackBarBlue;
        private Label lblRed;
        private Label lblGreen;
        private Label lblBlue;
        private Label lblRedValue;
        private Label lblGreenValue;
        private Label lblBlueValue;
        private Label lblBack;
    }
}

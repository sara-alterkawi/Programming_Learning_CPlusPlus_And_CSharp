namespace PizzaOrderProject
{
    partial class FrmMain
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
            btnStart = new Button();
            SuspendLayout();
            // 
            // btnStart
            // 
            btnStart.BackColor = Color.Transparent;
            btnStart.Cursor = Cursors.Hand;
            btnStart.FlatAppearance.BorderSize = 0;
            btnStart.FlatAppearance.MouseDownBackColor = Color.Transparent;
            btnStart.FlatAppearance.MouseOverBackColor = Color.Transparent;
            btnStart.FlatStyle = FlatStyle.Flat;
            btnStart.Location = new Point(206, 932);
            btnStart.Margin = new Padding(4);
            btnStart.Name = "btnStart";
            btnStart.Size = new Size(591, 101);
            btnStart.TabIndex = 0;
            btnStart.UseVisualStyleBackColor = false;
            btnStart.Click += btnStart_Click;
            // 
            // FrmMain
            // 
            AutoScaleDimensions = new SizeF(13F, 32F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.Control;
            BackgroundImage = Properties.Resources.Main_Screen;
            BackgroundImageLayout = ImageLayout.Zoom;
            ClientSize = new Size(2119, 1206);
            Controls.Add(btnStart);
            FormBorderStyle = FormBorderStyle.None;
            Margin = new Padding(4);
            Name = "FrmMain";
            Text = "Main";
            Load += FrmMain_Load;
            ResumeLayout(false);
        }

        #endregion

        private Button btnStart;
    }
}

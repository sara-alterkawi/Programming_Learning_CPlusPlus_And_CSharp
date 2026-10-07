namespace WinFormsApp1
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
            pbImg = new PictureBox();
            lblTitle = new Label();
            cbImg = new ComboBox();
            ((System.ComponentModel.ISupportInitialize)pbImg).BeginInit();
            SuspendLayout();
            // 
            // pbImg
            // 
            pbImg.Image = Properties.Resources.Book;
            pbImg.Location = new Point(269, 111);
            pbImg.Name = "pbImg";
            pbImg.Size = new Size(279, 234);
            pbImg.SizeMode = PictureBoxSizeMode.Zoom;
            pbImg.TabIndex = 0;
            pbImg.TabStop = false;
            // 
            // lblTitle
            // 
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Showcard Gothic", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(294, 35);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(79, 30);
            lblTitle.TabIndex = 1;
            lblTitle.Text = "Title";
            // 
            // cbImg
            // 
            cbImg.FormattingEnabled = true;
            cbImg.Items.AddRange(new object[] { "Boy", "Girl", "Book", "Pen" });
            cbImg.Location = new Point(268, 363);
            cbImg.Name = "cbImg";
            cbImg.Size = new Size(278, 33);
            cbImg.TabIndex = 2;
            cbImg.SelectedIndexChanged += cbImg_SelectedIndexChanged;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(cbImg);
            Controls.Add(lblTitle);
            Controls.Add(pbImg);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)pbImg).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private PictureBox pbImg;
        private Label lblTitle;
        private ComboBox cbImg;
    }
}

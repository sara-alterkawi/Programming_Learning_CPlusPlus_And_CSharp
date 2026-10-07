namespace Exercise
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            pictureBox1 = new PictureBox();
            rdBtnBoy = new RadioButton();
            rdBtnGirl = new RadioButton();
            rdBtnBook = new RadioButton();
            rdBtnPen = new RadioButton();
            lblTitle = new Label();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // pictureBox1
            // 
            pictureBox1.Location = new Point(141, 97);
            pictureBox1.Margin = new Padding(6);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(566, 388);
            pictureBox1.SizeMode = PictureBoxSizeMode.Zoom;
            pictureBox1.TabIndex = 0;
            pictureBox1.TabStop = false;
            // 
            // rdBtnBoy
            // 
            rdBtnBoy.AutoSize = true;
            rdBtnBoy.Font = new Font("Microsoft Sans Serif", 18F);
            rdBtnBoy.Location = new Point(216, 507);
            rdBtnBoy.Margin = new Padding(6);
            rdBtnBoy.Name = "rdBtnBoy";
            rdBtnBoy.Size = new Size(104, 44);
            rdBtnBoy.TabIndex = 1;
            rdBtnBoy.TabStop = true;
            rdBtnBoy.Tag = "Boy";
            rdBtnBoy.Text = "Boy";
            rdBtnBoy.UseVisualStyleBackColor = true;
            rdBtnBoy.CheckedChanged += rdBtnBoy_CheckedChanged;
            // 
            // rdBtnGirl
            // 
            rdBtnGirl.AutoSize = true;
            rdBtnGirl.Font = new Font("Microsoft Sans Serif", 18F);
            rdBtnGirl.Location = new Point(331, 507);
            rdBtnGirl.Margin = new Padding(6);
            rdBtnGirl.Name = "rdBtnGirl";
            rdBtnGirl.Size = new Size(98, 44);
            rdBtnGirl.TabIndex = 2;
            rdBtnGirl.TabStop = true;
            rdBtnGirl.Tag = "Girl";
            rdBtnGirl.Text = "Girl";
            rdBtnGirl.UseVisualStyleBackColor = true;
            rdBtnGirl.CheckedChanged += rdBtnGirl_CheckedChanged;
            // 
            // rdBtnBook
            // 
            rdBtnBook.AutoSize = true;
            rdBtnBook.Font = new Font("Microsoft Sans Serif", 18F);
            rdBtnBook.Location = new Point(443, 507);
            rdBtnBook.Margin = new Padding(6);
            rdBtnBook.Name = "rdBtnBook";
            rdBtnBook.Size = new Size(124, 44);
            rdBtnBook.TabIndex = 3;
            rdBtnBook.TabStop = true;
            rdBtnBook.Tag = "Book";
            rdBtnBook.Text = "Book";
            rdBtnBook.UseVisualStyleBackColor = true;
            rdBtnBook.CheckedChanged += rdBtnBook_CheckedChanged;
            // 
            // rdBtnPen
            // 
            rdBtnPen.AutoSize = true;
            rdBtnPen.Font = new Font("Microsoft Sans Serif", 18F);
            rdBtnPen.Location = new Point(573, 507);
            rdBtnPen.Margin = new Padding(6);
            rdBtnPen.Name = "rdBtnPen";
            rdBtnPen.Size = new Size(106, 44);
            rdBtnPen.TabIndex = 4;
            rdBtnPen.TabStop = true;
            rdBtnPen.Tag = "Pen";
            rdBtnPen.Text = "Pen";
            rdBtnPen.UseVisualStyleBackColor = true;
            rdBtnPen.CheckedChanged += rdBtnPen_CheckedChanged;
            // 
            // lblTitle
            // 
            lblTitle.Font = new Font("Showcard Gothic", 33.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.FromArgb(192, 0, 0);
            lblTitle.Location = new Point(141, 14);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(566, 77);
            lblTitle.TabIndex = 6;
            lblTitle.Text = "Title";
            lblTitle.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(16F, 32F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            ClientSize = new Size(816, 583);
            Controls.Add(lblTitle);
            Controls.Add(rdBtnPen);
            Controls.Add(rdBtnBook);
            Controls.Add(rdBtnGirl);
            Controls.Add(rdBtnBoy);
            Controls.Add(pictureBox1);
            Font = new Font("Microsoft Sans Serif", 14F);
            Margin = new Padding(6);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ResumeLayout(false);
            PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.RadioButton rdBtnBoy;
        private System.Windows.Forms.RadioButton rdBtnGirl;
        private System.Windows.Forms.RadioButton rdBtnBook;
        private System.Windows.Forms.RadioButton rdBtnPen;
        private System.Windows.Forms.Label lblTitle;
    }
}


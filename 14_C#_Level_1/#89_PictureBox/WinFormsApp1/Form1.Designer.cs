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
            pictureBox1 = new PictureBox();
            btnSpiderMan = new Button();
            btnFireMan = new Button();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources.Fireman;
            pictureBox1.Location = new Point(240, 28);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(329, 283);
            pictureBox1.SizeMode = PictureBoxSizeMode.Zoom;
            pictureBox1.TabIndex = 0;
            pictureBox1.TabStop = false;
            // 
            // btnSpiderMan
            // 
            btnSpiderMan.Location = new Point(240, 335);
            btnSpiderMan.Name = "btnSpiderMan";
            btnSpiderMan.Size = new Size(159, 66);
            btnSpiderMan.TabIndex = 1;
            btnSpiderMan.Text = "SpiderMan";
            btnSpiderMan.UseVisualStyleBackColor = true;
            btnSpiderMan.Click += btnSpiderMan_Click;
            // 
            // btnFireMan
            // 
            btnFireMan.Location = new Point(410, 335);
            btnFireMan.Name = "btnFireMan";
            btnFireMan.Size = new Size(159, 66);
            btnFireMan.TabIndex = 2;
            btnFireMan.Text = "FireMan";
            btnFireMan.UseVisualStyleBackColor = true;
            btnFireMan.Click += btnFireMan_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnFireMan);
            Controls.Add(btnSpiderMan);
            Controls.Add(pictureBox1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private PictureBox pictureBox1;
        private Button btnSpiderMan;
        private Button btnFireMan;
    }
}

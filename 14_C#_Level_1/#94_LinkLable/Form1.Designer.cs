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
            lkLGoogle = new LinkLabel();
            SuspendLayout();
            // 
            // lkLGoogle
            // 
            lkLGoogle.AutoSize = true;
            lkLGoogle.Font = new Font("Showcard Gothic", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            lkLGoogle.Location = new Point(218, 115);
            lkLGoogle.Name = "lkLGoogle";
            lkLGoogle.Size = new Size(164, 30);
            lkLGoogle.TabIndex = 0;
            lkLGoogle.TabStop = true;
            lkLGoogle.Text = "Google.com";
            lkLGoogle.LinkClicked += lkLGoogle_LinkClicked;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(lkLGoogle);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private LinkLabel lkLGoogle;
    }
}

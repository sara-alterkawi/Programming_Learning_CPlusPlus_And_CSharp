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
            checkedListBox1 = new CheckedListBox();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            button4 = new Button();
            button5 = new Button();
            SuspendLayout();
            // 
            // checkedListBox1
            // 
            checkedListBox1.FormattingEnabled = true;
            checkedListBox1.Location = new Point(191, 32);
            checkedListBox1.Name = "checkedListBox1";
            checkedListBox1.Size = new Size(407, 200);
            checkedListBox1.TabIndex = 0;
            // 
            // button1
            // 
            button1.Location = new Point(195, 240);
            button1.Name = "button1";
            button1.Size = new Size(124, 66);
            button1.TabIndex = 1;
            button1.Text = "Add Items";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.Location = new Point(473, 238);
            button2.Name = "button2";
            button2.Size = new Size(124, 66);
            button2.TabIndex = 2;
            button2.Text = "Show Selected Items";
            button2.UseVisualStyleBackColor = true;
            button2.Click += button2_Click;
            // 
            // button3
            // 
            button3.Location = new Point(195, 312);
            button3.Name = "button3";
            button3.Size = new Size(124, 66);
            button3.TabIndex = 3;
            button3.Text = "Check All Items";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // button4
            // 
            button4.Location = new Point(474, 310);
            button4.Name = "button4";
            button4.Size = new Size(124, 66);
            button4.TabIndex = 4;
            button4.Text = "Uncheck All Items";
            button4.UseVisualStyleBackColor = true;
            button4.Click += button4_Click;
            // 
            // button5
            // 
            button5.Location = new Point(334, 377);
            button5.Name = "button5";
            button5.Size = new Size(124, 66);
            button5.TabIndex = 5;
            button5.Text = "Remove Last Item";
            button5.UseVisualStyleBackColor = true;
            button5.Click += button5_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(button5);
            Controls.Add(button4);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Controls.Add(checkedListBox1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
        }

        #endregion

        private CheckedListBox checkedListBox1;
        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
        private Button button5;
    }
}

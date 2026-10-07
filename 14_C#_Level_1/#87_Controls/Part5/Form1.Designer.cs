namespace Part5
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
            textBox1 = new TextBox();
            textBox2 = new TextBox();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            button4 = new Button();
            button5 = new Button();
            button6 = new Button();
            button7 = new Button();
            button8 = new Button();
            button9 = new Button();
            label1 = new Label();
            button10 = new Button();
            btnClose = new Button();
            SuspendLayout();
            // 
            // textBox1
            // 
            textBox1.Location = new Point(117, 77);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(156, 31);
            textBox1.TabIndex = 0;
            textBox1.TextChanged += textBox1_TextChanged;
            // 
            // textBox2
            // 
            textBox2.Enabled = false;
            textBox2.Location = new Point(427, 77);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(156, 31);
            textBox2.TabIndex = 1;
            // 
            // button1
            // 
            button1.Location = new Point(39, 150);
            button1.Name = "button1";
            button1.Size = new Size(156, 31);
            button1.TabIndex = 2;
            button1.Text = "Copy on click";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.Location = new Point(594, 150);
            button2.Name = "button2";
            button2.Size = new Size(156, 31);
            button2.TabIndex = 3;
            button2.Text = "Copy on hover";
            button2.UseVisualStyleBackColor = true;
            button2.MouseEnter += button2_MouseEnter;
            // 
            // button3
            // 
            button3.Location = new Point(39, 226);
            button3.Name = "button3";
            button3.Size = new Size(156, 31);
            button3.TabIndex = 4;
            button3.Text = "Disable txtbox";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // button4
            // 
            button4.Location = new Point(224, 226);
            button4.Name = "button4";
            button4.Size = new Size(156, 31);
            button4.TabIndex = 5;
            button4.Text = "Enable txtbox";
            button4.UseVisualStyleBackColor = true;
            button4.Click += button4_Click;
            // 
            // button5
            // 
            button5.Location = new Point(410, 226);
            button5.Name = "button5";
            button5.Size = new Size(156, 31);
            button5.TabIndex = 6;
            button5.Text = "Hide txtbox";
            button5.UseVisualStyleBackColor = true;
            button5.Click += button5_Click;
            // 
            // button6
            // 
            button6.Location = new Point(594, 226);
            button6.Name = "button6";
            button6.Size = new Size(156, 31);
            button6.TabIndex = 7;
            button6.Text = "Show txtbox";
            button6.UseVisualStyleBackColor = true;
            button6.Click += button6_Click;
            // 
            // button7
            // 
            button7.Location = new Point(39, 302);
            button7.Name = "button7";
            button7.Size = new Size(156, 31);
            button7.TabIndex = 8;
            button7.Text = "Red back color";
            button7.UseVisualStyleBackColor = true;
            button7.Click += button7_Click;
            // 
            // button8
            // 
            button8.Location = new Point(224, 302);
            button8.Name = "button8";
            button8.Size = new Size(156, 31);
            button8.TabIndex = 9;
            button8.Text = "White back color";
            button8.UseVisualStyleBackColor = true;
            button8.Click += button8_Click;
            // 
            // button9
            // 
            button9.Location = new Point(410, 302);
            button9.Name = "button9";
            button9.Size = new Size(156, 31);
            button9.TabIndex = 10;
            button9.Text = "Change title";
            button9.UseVisualStyleBackColor = true;
            button9.Click += button9_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Showcard Gothic", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label1.ForeColor = SystemColors.Highlight;
            label1.Location = new Point(113, 9);
            label1.Name = "label1";
            label1.Size = new Size(507, 44);
            label1.TabIndex = 11;
            label1.Text = "This is a practice project";
            // 
            // button10
            // 
            button10.Location = new Point(594, 302);
            button10.Name = "button10";
            button10.Size = new Size(156, 31);
            button10.TabIndex = 12;
            button10.Text = "Change TextLable";
            button10.UseVisualStyleBackColor = true;
            button10.Click += button10_Click;
            // 
            // btnClose
            // 
            btnClose.Location = new Point(410, 377);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(156, 31);
            btnClose.TabIndex = 13;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = true;
            btnClose.Click += btnClose_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnClose);
            Controls.Add(button10);
            Controls.Add(label1);
            Controls.Add(button9);
            Controls.Add(button8);
            Controls.Add(button7);
            Controls.Add(button6);
            Controls.Add(button5);
            Controls.Add(button4);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Controls.Add(textBox2);
            Controls.Add(textBox1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBox1;
        private TextBox textBox2;
        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
        private Button button5;
        private Button button6;
        private Button button7;
        private Button button8;
        private Button button9;
        private Label label1;
        private Button button10;
        private Button btnClose;
    }
}

namespace Part6
{
    partial class FrmMain
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
            btnShowForm1 = new Button();
            btnMessageBoxForm = new Button();
            button1 = new Button();
            SuspendLayout();
            // 
            // btnShowForm1
            // 
            btnShowForm1.Location = new Point(322, 134);
            btnShowForm1.Name = "btnShowForm1";
            btnShowForm1.Size = new Size(156, 31);
            btnShowForm1.TabIndex = 3;
            btnShowForm1.Text = "Show Form1";
            btnShowForm1.UseVisualStyleBackColor = true;
            btnShowForm1.Click += btnShowForm1_Click;
            // 
            // btnMessageBoxForm
            // 
            btnMessageBoxForm.Location = new Point(322, 187);
            btnMessageBoxForm.Name = "btnMessageBoxForm";
            btnMessageBoxForm.Size = new Size(156, 31);
            btnMessageBoxForm.TabIndex = 4;
            btnMessageBoxForm.Text = "Show Message Box";
            btnMessageBoxForm.UseVisualStyleBackColor = true;
            btnMessageBoxForm.Click += btnMessageBoxForm_Click;
            // 
            // button1
            // 
            button1.Location = new Point(322, 241);
            button1.Name = "button1";
            button1.Size = new Size(156, 31);
            button1.TabIndex = 5;
            button1.Text = "Show Choises";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // FrmMain
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(button1);
            Controls.Add(btnMessageBoxForm);
            Controls.Add(btnShowForm1);
            Name = "FrmMain";
            Text = "FrmMain";
            ResumeLayout(false);
        }

        #endregion

        private Button btnShowForm1;
        private Button btnMessageBoxForm;
        private Button button1;
    }
}
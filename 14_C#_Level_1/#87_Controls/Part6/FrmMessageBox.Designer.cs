namespace Part6
{
    partial class FrmMessageBox
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
            btnShowMessage = new Button();
            btnShowMessageWithTitle = new Button();
            btnShowMessageMulti = new Button();
            button1 = new Button();
            btnDef = new Button();
            SuspendLayout();
            // 
            // btnShowMessage
            // 
            btnShowMessage.Location = new Point(322, 76);
            btnShowMessage.Name = "btnShowMessage";
            btnShowMessage.Size = new Size(156, 31);
            btnShowMessage.TabIndex = 4;
            btnShowMessage.Text = "Show Message";
            btnShowMessage.UseVisualStyleBackColor = true;
            btnShowMessage.Click += btnShowMessage_Click;
            // 
            // btnShowMessageWithTitle
            // 
            btnShowMessageWithTitle.Location = new Point(322, 127);
            btnShowMessageWithTitle.Name = "btnShowMessageWithTitle";
            btnShowMessageWithTitle.Size = new Size(156, 31);
            btnShowMessageWithTitle.TabIndex = 5;
            btnShowMessageWithTitle.Text = "Message with Title";
            btnShowMessageWithTitle.UseVisualStyleBackColor = true;
            btnShowMessageWithTitle.Click += btnShowMessageWithTitle_Click;
            // 
            // btnShowMessageMulti
            // 
            btnShowMessageMulti.Location = new Point(322, 179);
            btnShowMessageMulti.Name = "btnShowMessageMulti";
            btnShowMessageMulti.Size = new Size(156, 31);
            btnShowMessageMulti.TabIndex = 6;
            btnShowMessageMulti.Text = "Buttuns Message";
            btnShowMessageMulti.UseVisualStyleBackColor = true;
            btnShowMessageMulti.Click += btnShowMessageMulti_Click;
            // 
            // button1
            // 
            button1.Location = new Point(322, 225);
            button1.Name = "button1";
            button1.Size = new Size(156, 31);
            button1.TabIndex = 7;
            button1.Text = "Message Image";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // btnDef
            // 
            btnDef.Location = new Point(322, 278);
            btnDef.Name = "btnDef";
            btnDef.Size = new Size(156, 31);
            btnDef.TabIndex = 8;
            btnDef.Text = "Default Button";
            btnDef.UseVisualStyleBackColor = true;
            btnDef.Click += btnDef_Click;
            // 
            // FrmMessageBox
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnDef);
            Controls.Add(button1);
            Controls.Add(btnShowMessageMulti);
            Controls.Add(btnShowMessageWithTitle);
            Controls.Add(btnShowMessage);
            Name = "FrmMessageBox";
            Text = "FrmMessageBox";
            ResumeLayout(false);
        }

        #endregion

        private Button btnShowMessage;
        private Button btnShowMessageWithTitle;
        private Button btnShowMessageMulti;
        private Button button1;
        private Button btnDef;
    }
}
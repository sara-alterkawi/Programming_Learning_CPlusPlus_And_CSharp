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
            textBox1 = new TextBox();
            btnChangBackColor = new Button();
            btnChangeForeColor = new Button();
            colorDialog1 = new ColorDialog();
            btnChangeFont = new Button();
            fontDialog1 = new FontDialog();
            saveFileDialog1 = new SaveFileDialog();
            btnSaveFileDialog = new Button();
            btnOpenFileDialog = new Button();
            openFileDialog1 = new OpenFileDialog();
            btnOpenFileDialogMulti = new Button();
            folderBrowserDialog1 = new FolderBrowserDialog();
            btnFolderBrowserDialog = new Button();
            SuspendLayout();
            // 
            // textBox1
            // 
            textBox1.Location = new Point(153, 51);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(150, 31);
            textBox1.TabIndex = 0;
            // 
            // btnChangBackColor
            // 
            btnChangBackColor.Location = new Point(96, 88);
            btnChangBackColor.Name = "btnChangBackColor";
            btnChangBackColor.Size = new Size(112, 34);
            btnChangBackColor.TabIndex = 1;
            btnChangBackColor.Text = "Back color";
            btnChangBackColor.UseVisualStyleBackColor = true;
            btnChangBackColor.Click += btnChangBackColor_Click;
            // 
            // btnChangeForeColor
            // 
            btnChangeForeColor.Location = new Point(246, 88);
            btnChangeForeColor.Name = "btnChangeForeColor";
            btnChangeForeColor.Size = new Size(112, 34);
            btnChangeForeColor.TabIndex = 2;
            btnChangeForeColor.Text = "Fore color";
            btnChangeForeColor.UseVisualStyleBackColor = true;
            btnChangeForeColor.Click += btnChangeForeColor_Click;
            // 
            // btnChangeFont
            // 
            btnChangeFont.Location = new Point(96, 128);
            btnChangeFont.Name = "btnChangeFont";
            btnChangeFont.Size = new Size(112, 34);
            btnChangeFont.TabIndex = 3;
            btnChangeFont.Text = "Font Change";
            btnChangeFont.UseVisualStyleBackColor = true;
            btnChangeFont.Click += btnChangeFont_Click;
            // 
            // fontDialog1
            // 
            fontDialog1.Apply += fontDialog1_Apply;
            // 
            // btnSaveFileDialog
            // 
            btnSaveFileDialog.Location = new Point(246, 128);
            btnSaveFileDialog.Name = "btnSaveFileDialog";
            btnSaveFileDialog.Size = new Size(112, 34);
            btnSaveFileDialog.TabIndex = 4;
            btnSaveFileDialog.Text = "Save file";
            btnSaveFileDialog.UseVisualStyleBackColor = true;
            btnSaveFileDialog.Click += btnSaveFileDialog_Click;
            // 
            // btnOpenFileDialog
            // 
            btnOpenFileDialog.Location = new Point(96, 168);
            btnOpenFileDialog.Name = "btnOpenFileDialog";
            btnOpenFileDialog.Size = new Size(112, 34);
            btnOpenFileDialog.TabIndex = 5;
            btnOpenFileDialog.Text = "Open file";
            btnOpenFileDialog.UseVisualStyleBackColor = true;
            btnOpenFileDialog.Click += btnOpenFileDialog_Click;
            // 
            // openFileDialog1
            // 
            openFileDialog1.FileName = "openFileDialog1";
            // 
            // btnOpenFileDialogMulti
            // 
            btnOpenFileDialogMulti.Location = new Point(246, 168);
            btnOpenFileDialogMulti.Name = "btnOpenFileDialogMulti";
            btnOpenFileDialogMulti.Size = new Size(112, 34);
            btnOpenFileDialogMulti.TabIndex = 6;
            btnOpenFileDialogMulti.Text = "Open Multi files";
            btnOpenFileDialogMulti.UseVisualStyleBackColor = true;
            btnOpenFileDialogMulti.Click += btnOpenFileDialogMulti_Click;
            // 
            // btnFolderBrowserDialog
            // 
            btnFolderBrowserDialog.Location = new Point(96, 208);
            btnFolderBrowserDialog.Name = "btnFolderBrowserDialog";
            btnFolderBrowserDialog.Size = new Size(112, 34);
            btnFolderBrowserDialog.TabIndex = 7;
            btnFolderBrowserDialog.Text = "Brows folder";
            btnFolderBrowserDialog.UseVisualStyleBackColor = true;
            btnFolderBrowserDialog.Click += btnFolderBrowserDialog_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnFolderBrowserDialog);
            Controls.Add(btnOpenFileDialogMulti);
            Controls.Add(btnOpenFileDialog);
            Controls.Add(btnSaveFileDialog);
            Controls.Add(btnChangeFont);
            Controls.Add(btnChangeForeColor);
            Controls.Add(btnChangBackColor);
            Controls.Add(textBox1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBox1;
        private Button btnChangBackColor;
        private Button btnChangeForeColor;
        private ColorDialog colorDialog1;
        private Button btnChangeFont;
        private FontDialog fontDialog1;
        private SaveFileDialog saveFileDialog1;
        private Button btnSaveFileDialog;
        private Button btnOpenFileDialog;
        private OpenFileDialog openFileDialog1;
        private Button btnOpenFileDialogMulti;
        private FolderBrowserDialog folderBrowserDialog1;
        private Button btnFolderBrowserDialog;
    }
}

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
            menuStrip1 = new MenuStrip();
            fileToolStripMenuItem = new ToolStripMenuItem();
            findClientToolStripMenuItem = new ToolStripMenuItem();
            addNewClientToolStripMenuItem = new ToolStripMenuItem();
            option1ToolStripMenuItem = new ToolStripMenuItem();
            option2ToolStripMenuItem = new ToolStripMenuItem();
            deleteClientToolStripMenuItem = new ToolStripMenuItem();
            updateClientToolStripMenuItem = new ToolStripMenuItem();
            toolStripMenuItem1 = new ToolStripSeparator();
            loginToolStripMenuItem = new ToolStripMenuItem();
            logoutToolStripMenuItem = new ToolStripMenuItem();
            editToolStripMenuItem = new ToolStripMenuItem();
            editClientToolStripMenuItem = new ToolStripMenuItem();
            menuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // menuStrip1
            // 
            menuStrip1.ImageScalingSize = new Size(24, 24);
            menuStrip1.Items.AddRange(new ToolStripItem[] { fileToolStripMenuItem, editToolStripMenuItem });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(800, 33);
            menuStrip1.TabIndex = 1;
            menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            fileToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { findClientToolStripMenuItem, addNewClientToolStripMenuItem, deleteClientToolStripMenuItem, updateClientToolStripMenuItem, toolStripMenuItem1, loginToolStripMenuItem, logoutToolStripMenuItem });
            fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            fileToolStripMenuItem.Size = new Size(54, 29);
            fileToolStripMenuItem.Text = "&File";
            // 
            // findClientToolStripMenuItem
            // 
            findClientToolStripMenuItem.Name = "findClientToolStripMenuItem";
            findClientToolStripMenuItem.Size = new Size(270, 34);
            findClientToolStripMenuItem.Text = "Find Client";
            findClientToolStripMenuItem.Click += findClientToolStripMenuItem_Click;
            // 
            // addNewClientToolStripMenuItem
            // 
            addNewClientToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { option1ToolStripMenuItem, option2ToolStripMenuItem });
            addNewClientToolStripMenuItem.Name = "addNewClientToolStripMenuItem";
            addNewClientToolStripMenuItem.Size = new Size(270, 34);
            addNewClientToolStripMenuItem.Text = "Add New Client";
            addNewClientToolStripMenuItem.Click += addNewClientToolStripMenuItem_Click;
            // 
            // option1ToolStripMenuItem
            // 
            option1ToolStripMenuItem.Name = "option1ToolStripMenuItem";
            option1ToolStripMenuItem.Size = new Size(180, 34);
            option1ToolStripMenuItem.Text = "Option1";
            // 
            // option2ToolStripMenuItem
            // 
            option2ToolStripMenuItem.Name = "option2ToolStripMenuItem";
            option2ToolStripMenuItem.Size = new Size(180, 34);
            option2ToolStripMenuItem.Text = "Option2";
            // 
            // deleteClientToolStripMenuItem
            // 
            deleteClientToolStripMenuItem.Name = "deleteClientToolStripMenuItem";
            deleteClientToolStripMenuItem.Size = new Size(270, 34);
            deleteClientToolStripMenuItem.Text = "Delete Client";
            // 
            // updateClientToolStripMenuItem
            // 
            updateClientToolStripMenuItem.Name = "updateClientToolStripMenuItem";
            updateClientToolStripMenuItem.Size = new Size(270, 34);
            updateClientToolStripMenuItem.Text = "Update Client";
            // 
            // toolStripMenuItem1
            // 
            toolStripMenuItem1.Name = "toolStripMenuItem1";
            toolStripMenuItem1.Size = new Size(267, 6);
            // 
            // loginToolStripMenuItem
            // 
            loginToolStripMenuItem.Image = Properties.Resources.Boy;
            loginToolStripMenuItem.Name = "loginToolStripMenuItem";
            loginToolStripMenuItem.Size = new Size(270, 34);
            loginToolStripMenuItem.Text = "Login";
            // 
            // logoutToolStripMenuItem
            // 
            logoutToolStripMenuItem.Name = "logoutToolStripMenuItem";
            logoutToolStripMenuItem.ShortcutKeys = Keys.Control | Keys.E;
            logoutToolStripMenuItem.Size = new Size(270, 34);
            logoutToolStripMenuItem.Text = "Exit";
            logoutToolStripMenuItem.Click += logoutToolStripMenuItem_Click;
            // 
            // editToolStripMenuItem
            // 
            editToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { editClientToolStripMenuItem });
            editToolStripMenuItem.Name = "editToolStripMenuItem";
            editToolStripMenuItem.Size = new Size(58, 29);
            editToolStripMenuItem.Text = "&Edit";
            // 
            // editClientToolStripMenuItem
            // 
            editClientToolStripMenuItem.Name = "editClientToolStripMenuItem";
            editClientToolStripMenuItem.Size = new Size(270, 34);
            editClientToolStripMenuItem.Text = "Edit Client";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(menuStrip1);
            IsMdiContainer = true;
            MainMenuStrip = menuStrip1;
            Name = "Form1";
            Text = "Form1";
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private MenuStrip menuStrip1;
        private ToolStripMenuItem fileToolStripMenuItem;
        private ToolStripMenuItem findClientToolStripMenuItem;
        private ToolStripMenuItem addNewClientToolStripMenuItem;
        private ToolStripMenuItem deleteClientToolStripMenuItem;
        private ToolStripMenuItem updateClientToolStripMenuItem;
        private ToolStripSeparator toolStripMenuItem1;
        private ToolStripMenuItem loginToolStripMenuItem;
        private ToolStripMenuItem logoutToolStripMenuItem;
        private ToolStripMenuItem option1ToolStripMenuItem;
        private ToolStripMenuItem option2ToolStripMenuItem;
        private ToolStripMenuItem editToolStripMenuItem;
        private ToolStripMenuItem editClientToolStripMenuItem;
    }
}

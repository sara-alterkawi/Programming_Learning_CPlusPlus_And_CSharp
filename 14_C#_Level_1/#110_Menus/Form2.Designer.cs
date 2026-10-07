namespace WinFormsApp1
{
    partial class Form2
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
            components = new System.ComponentModel.Container();
            TreeNode treeNode1 = new TreeNode("Node3");
            TreeNode treeNode2 = new TreeNode("Node4");
            TreeNode treeNode3 = new TreeNode("Node8");
            TreeNode treeNode4 = new TreeNode("Node0", new TreeNode[] { treeNode1, treeNode2, treeNode3 });
            TreeNode treeNode5 = new TreeNode("Node9");
            TreeNode treeNode6 = new TreeNode("Node10");
            TreeNode treeNode7 = new TreeNode("Node1", new TreeNode[] { treeNode5, treeNode6 });
            TreeNode treeNode8 = new TreeNode("Node11");
            TreeNode treeNode9 = new TreeNode("Node2", new TreeNode[] { treeNode8 });
            textBox1 = new TextBox();
            cmFormat = new ContextMenuStrip(components);
            tsmChangeColor = new ToolStripMenuItem();
            tsmChangeFont = new ToolStripMenuItem();
            tcmClear = new ToolStripMenuItem();
            button1 = new Button();
            treeView1 = new TreeView();
            contextMenuStrip1 = new ContextMenuStrip(components);
            addNewToolStripMenuItem = new ToolStripMenuItem();
            deleteToolStripMenuItem = new ToolStripMenuItem();
            updateToolStripMenuItem = new ToolStripMenuItem();
            fontDialog1 = new FontDialog();
            colorDialog1 = new ColorDialog();
            cmFormat.SuspendLayout();
            contextMenuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // textBox1
            // 
            textBox1.ContextMenuStrip = cmFormat;
            textBox1.Location = new Point(12, 28);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(150, 31);
            textBox1.TabIndex = 0;
            // 
            // cmFormat
            // 
            cmFormat.ImageScalingSize = new Size(24, 24);
            cmFormat.Items.AddRange(new ToolStripItem[] { tsmChangeColor, tsmChangeFont, tcmClear });
            cmFormat.Name = "cmFormat";
            cmFormat.Size = new Size(193, 100);
            // 
            // tsmChangeColor
            // 
            tsmChangeColor.Name = "tsmChangeColor";
            tsmChangeColor.Size = new Size(192, 32);
            tsmChangeColor.Text = "Change Color";
            tsmChangeColor.Click += tsmChangeColor_Click;
            // 
            // tsmChangeFont
            // 
            tsmChangeFont.Name = "tsmChangeFont";
            tsmChangeFont.Size = new Size(192, 32);
            tsmChangeFont.Text = "Change Font";
            tsmChangeFont.Click += tsmChangeFont_Click;
            // 
            // tcmClear
            // 
            tcmClear.Name = "tcmClear";
            tcmClear.Size = new Size(192, 32);
            tcmClear.Text = "Clear";
            tcmClear.Click += tcmClear_Click;
            // 
            // button1
            // 
            button1.Location = new Point(12, 86);
            button1.Name = "button1";
            button1.Size = new Size(112, 34);
            button1.TabIndex = 1;
            button1.Text = "button1";
            button1.UseVisualStyleBackColor = true;
            // 
            // treeView1
            // 
            treeView1.ContextMenuStrip = contextMenuStrip1;
            treeView1.Location = new Point(586, 28);
            treeView1.Name = "treeView1";
            treeNode1.Name = "Node3";
            treeNode1.Text = "Node3";
            treeNode2.Name = "Node4";
            treeNode2.Text = "Node4";
            treeNode3.Name = "Node8";
            treeNode3.Text = "Node8";
            treeNode4.Name = "Node0";
            treeNode4.Text = "Node0";
            treeNode5.Name = "Node9";
            treeNode5.Text = "Node9";
            treeNode6.Name = "Node10";
            treeNode6.Text = "Node10";
            treeNode7.Name = "Node1";
            treeNode7.Text = "Node1";
            treeNode8.Name = "Node11";
            treeNode8.Text = "Node11";
            treeNode9.Name = "Node2";
            treeNode9.Text = "Node2";
            treeView1.Nodes.AddRange(new TreeNode[] { treeNode4, treeNode7, treeNode9 });
            treeView1.Size = new Size(182, 146);
            treeView1.TabIndex = 2;
            // 
            // contextMenuStrip1
            // 
            contextMenuStrip1.ImageScalingSize = new Size(24, 24);
            contextMenuStrip1.Items.AddRange(new ToolStripItem[] { addNewToolStripMenuItem, deleteToolStripMenuItem, updateToolStripMenuItem });
            contextMenuStrip1.Name = "contextMenuStrip1";
            contextMenuStrip1.Size = new Size(156, 100);
            // 
            // addNewToolStripMenuItem
            // 
            addNewToolStripMenuItem.Name = "addNewToolStripMenuItem";
            addNewToolStripMenuItem.Size = new Size(155, 32);
            addNewToolStripMenuItem.Text = "Add new";
            // 
            // deleteToolStripMenuItem
            // 
            deleteToolStripMenuItem.Name = "deleteToolStripMenuItem";
            deleteToolStripMenuItem.Size = new Size(155, 32);
            deleteToolStripMenuItem.Text = "Delete";
            // 
            // updateToolStripMenuItem
            // 
            updateToolStripMenuItem.Name = "updateToolStripMenuItem";
            updateToolStripMenuItem.Size = new Size(155, 32);
            updateToolStripMenuItem.Text = "Update";
            // 
            // Form2
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(treeView1);
            Controls.Add(button1);
            Controls.Add(textBox1);
            Name = "Form2";
            Text = "Form2";
            cmFormat.ResumeLayout(false);
            contextMenuStrip1.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBox1;
        private Button button1;
        private TreeView treeView1;
        private ContextMenuStrip contextMenuStrip1;
        private ToolStripMenuItem addNewToolStripMenuItem;
        private ToolStripMenuItem deleteToolStripMenuItem;
        private ToolStripMenuItem updateToolStripMenuItem;
        private ContextMenuStrip cmFormat;
        private ToolStripMenuItem tsmChangeColor;
        private ToolStripMenuItem tsmChangeFont;
        private ToolStripMenuItem tcmClear;
        private FontDialog fontDialog1;
        private ColorDialog colorDialog1;
    }
}
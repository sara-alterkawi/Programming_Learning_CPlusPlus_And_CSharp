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
            components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            TreeNode treeNode1 = new TreeNode("Mostafa");
            TreeNode treeNode2 = new TreeNode("Omar");
            TreeNode treeNode3 = new TreeNode("Yazan");
            TreeNode treeNode4 = new TreeNode("Hibah", new TreeNode[] { treeNode1, treeNode2, treeNode3 });
            TreeNode treeNode5 = new TreeNode("Dania");
            TreeNode treeNode6 = new TreeNode("Hadi");
            TreeNode treeNode7 = new TreeNode("Sara", new TreeNode[] { treeNode5, treeNode6 });
            TreeNode treeNode8 = new TreeNode("Jamal");
            TreeNode treeNode9 = new TreeNode("Kinan");
            TreeNode treeNode10 = new TreeNode("Zain");
            TreeNode treeNode11 = new TreeNode("Fadia", new TreeNode[] { treeNode8, treeNode9, treeNode10 });
            TreeNode treeNode12 = new TreeNode("Layana");
            TreeNode treeNode13 = new TreeNode("Abdulfattah");
            TreeNode treeNode14 = new TreeNode("Mira");
            TreeNode treeNode15 = new TreeNode("Doha", new TreeNode[] { treeNode12, treeNode13, treeNode14 });
            TreeNode treeNode16 = new TreeNode("Omar");
            TreeNode treeNode17 = new TreeNode("Asel");
            TreeNode treeNode18 = new TreeNode("Awad", new TreeNode[] { treeNode16, treeNode17 });
            TreeNode treeNode19 = new TreeNode("Bakir");
            TreeNode treeNode20 = new TreeNode("Talin");
            TreeNode treeNode21 = new TreeNode("Abdullah", new TreeNode[] { treeNode19, treeNode20 });
            TreeNode treeNode22 = new TreeNode("Ghofran");
            TreeNode treeNode23 = new TreeNode("Aya");
            TreeNode treeNode24 = new TreeNode("Omar", new TreeNode[] { treeNode4, treeNode7, treeNode11, treeNode15, treeNode18, treeNode21, treeNode22, treeNode23 });
            TreeNode treeNode25 = new TreeNode("Dania");
            TreeNode treeNode26 = new TreeNode("Hadi");
            TreeNode treeNode27 = new TreeNode("Ahmad", new TreeNode[] { treeNode25, treeNode26 });
            TreeNode treeNode28 = new TreeNode("Abdulhadi", new TreeNode[] { treeNode27 });
            imageList1 = new ImageList(components);
            treeView1 = new TreeView();
            SuspendLayout();
            // 
            // imageList1
            // 
            imageList1.ColorDepth = ColorDepth.Depth32Bit;
            imageList1.ImageStream = (ImageListStreamer)resources.GetObject("imageList1.ImageStream");
            imageList1.TransparentColor = Color.Transparent;
            imageList1.Images.SetKeyName(0, "man.png");
            imageList1.Images.SetKeyName(1, "woman.png");
            // 
            // treeView1
            // 
            treeView1.CheckBoxes = true;
            treeView1.ImageIndex = 0;
            treeView1.ImageList = imageList1;
            treeView1.Location = new Point(0, 0);
            treeView1.Name = "treeView1";
            treeNode1.ImageIndex = 0;
            treeNode1.Name = "Node13";
            treeNode1.Text = "Mostafa";
            treeNode2.ImageIndex = 0;
            treeNode2.Name = "Node14";
            treeNode2.Text = "Omar";
            treeNode3.ImageIndex = 0;
            treeNode3.Name = "Node15";
            treeNode3.Text = "Yazan";
            treeNode4.ImageIndex = 1;
            treeNode4.Name = "Node3";
            treeNode4.Text = "Hibah";
            treeNode5.ImageIndex = 1;
            treeNode5.Name = "Node17";
            treeNode5.Text = "Dania";
            treeNode6.ImageIndex = 0;
            treeNode6.Name = "Node18";
            treeNode6.Text = "Hadi";
            treeNode7.ImageIndex = 1;
            treeNode7.Name = "Node16";
            treeNode7.Text = "Sara";
            treeNode8.ImageIndex = 0;
            treeNode8.Name = "Node23";
            treeNode8.Text = "Jamal";
            treeNode9.ImageIndex = 0;
            treeNode9.Name = "Node24";
            treeNode9.Text = "Kinan";
            treeNode10.ImageIndex = 0;
            treeNode10.Name = "Node25";
            treeNode10.Text = "Zain";
            treeNode11.ImageIndex = 1;
            treeNode11.Name = "Node19";
            treeNode11.Text = "Fadia";
            treeNode12.ImageIndex = 1;
            treeNode12.Name = "Node26";
            treeNode12.Text = "Layana";
            treeNode13.ImageIndex = 0;
            treeNode13.Name = "Node27";
            treeNode13.Text = "Abdulfattah";
            treeNode14.ImageIndex = 1;
            treeNode14.Name = "Node28";
            treeNode14.Text = "Mira";
            treeNode15.ImageIndex = 1;
            treeNode15.Name = "Node20";
            treeNode15.Text = "Doha";
            treeNode16.ImageIndex = 0;
            treeNode16.Name = "Node9";
            treeNode16.Text = "Omar";
            treeNode17.ImageIndex = 1;
            treeNode17.Name = "Node10";
            treeNode17.Text = "Asel";
            treeNode18.Name = "Node1";
            treeNode18.SelectedImageIndex = 0;
            treeNode18.Text = "Awad";
            treeNode19.ImageIndex = 0;
            treeNode19.Name = "Node11";
            treeNode19.Text = "Bakir";
            treeNode20.ImageIndex = 1;
            treeNode20.Name = "Node12";
            treeNode20.Text = "Talin";
            treeNode21.ImageIndex = 0;
            treeNode21.Name = "Node2";
            treeNode21.Text = "Abdullah";
            treeNode22.ImageIndex = 1;
            treeNode22.Name = "Node21";
            treeNode22.Text = "Ghofran";
            treeNode23.ImageIndex = 1;
            treeNode23.Name = "Node22";
            treeNode23.Text = "Aya";
            treeNode24.ImageIndex = 0;
            treeNode24.Name = "Node0";
            treeNode24.Text = "Omar";
            treeNode25.ImageIndex = 1;
            treeNode25.Name = "Node29";
            treeNode25.Text = "Dania";
            treeNode26.ImageIndex = 0;
            treeNode26.Name = "Node30";
            treeNode26.Text = "Hadi";
            treeNode27.ImageIndex = 0;
            treeNode27.Name = "Node5";
            treeNode27.Text = "Ahmad";
            treeNode28.ImageIndex = 0;
            treeNode28.Name = "Node4";
            treeNode28.Text = "Abdulhadi";
            treeView1.Nodes.AddRange(new TreeNode[] { treeNode24, treeNode28 });
            treeView1.SelectedImageIndex = 1;
            treeView1.Size = new Size(318, 348);
            treeView1.TabIndex = 0;
            treeView1.AfterCheck += treeView1_AfterCheck;
            treeView1.MouseDoubleClick += treeView1_MouseDoubleClick;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(treeView1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
        }

        #endregion

        private ImageList imageList1;
        private TreeView treeView1;
    }
}

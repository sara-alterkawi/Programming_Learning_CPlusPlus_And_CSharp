namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void treeView1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            MessageBox.Show(treeView1.SelectedNode.Text);
        }

        private void treeView1_AfterCheck(object sender, TreeViewEventArgs e)
        {
            CheckTreeViewNode(e.Node, e.Node.Checked);
        }

        private void CheckTreeViewNode(TreeNode node, bool isChecked)
        {
            foreach (TreeNode nNode in node.Nodes)
            {
                nNode.Checked = isChecked;
                if (nNode.Nodes.Count > 0)
                {
                    this.CheckTreeViewNode(nNode, isChecked);
                }
            }
        }
    }
}

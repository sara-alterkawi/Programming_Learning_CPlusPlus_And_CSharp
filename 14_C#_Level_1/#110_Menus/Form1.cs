namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        Form2 frm = new Form2();

        private void findClientToolStripMenuItem_Click(object sender, EventArgs e)
        {
            frm.MdiParent = this;
            frm.Show();
        }

        private void addNewClientToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Add New Client is here");
        }

        private void logoutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Exit is here");
        }
    }
}

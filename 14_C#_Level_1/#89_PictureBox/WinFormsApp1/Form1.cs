using WinFormsApp1.Properties;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnSpiderMan_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Spiderman;
        }

        private void btnFireMan_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Fireman;
        }
    }
}

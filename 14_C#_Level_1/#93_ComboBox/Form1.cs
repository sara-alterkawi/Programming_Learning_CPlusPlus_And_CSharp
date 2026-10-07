using WinFormsApp1.Properties;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            cbImg.SelectedIndex = 0;
        }

        private void cbImg_SelectedIndexChanged(object sender, EventArgs e)
        {
            lblTitle.Text = cbImg.Text;
            pbImg.Image = (Image)(Properties.Resources.ResourceManager.GetObject(cbImg.Text));
        }
    }
}

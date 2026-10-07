namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void lkLGoogle_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            lkLGoogle.LinkVisited = true;
            System.Diagnostics.Process.Start("https://www.google.com/?zx=1791295689820");
        }
    }
}

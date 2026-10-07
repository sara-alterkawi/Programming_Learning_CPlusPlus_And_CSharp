namespace PizzaOrderProject
{
    public partial class FrmMain : Form
    {
        public FrmMain()
        {
            InitializeComponent();
        }

        private void FrmMain_Load(object sender, EventArgs e)
        {

            
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            // Hide the main form and show the order form as a modal dialog
            this.Hide();
            Form frm1 = new FrmOrder();
            frm1.ShowDialog();
            // Show the main form again after the order form is closed
            this.Show();
        }
    }
}

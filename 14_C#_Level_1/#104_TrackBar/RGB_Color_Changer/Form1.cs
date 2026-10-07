namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void trackBarRed_Scroll(object sender, EventArgs e)
        {
            UpdateColor();
        }

        private void trackBarGreen_Scroll(object sender, EventArgs e)
        {
            UpdateColor();
        }

        private void trackBarblue_Scroll(object sender, EventArgs e)
        {
            UpdateColor();
        }

        private void UpdateColor()
        {
            int red = trackBarRed.Value;
            int green = trackBarGreen.Value;
            int blue = trackBarBlue.Value;

            lblRedValue.Text = red.ToString();
            lblGreenValue.Text = green.ToString();
            lblBlueValue.Text = blue.ToString();

            this.BackColor = Color.FromArgb(red, green, blue);
        }
    }
}

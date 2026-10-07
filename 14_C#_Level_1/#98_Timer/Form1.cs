namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        private int Counter = 0;
        public Form1()
        {
            InitializeComponent();
            button4.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
            button1 .Enabled = false;
            button4.Enabled = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            Counter = 0;
            label1.Text = Counter.ToString();
            button1 .Enabled = true;
            button4 .Enabled = false;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            Counter++;
            label1.Text = Counter.ToString();
        }

        
    }
}

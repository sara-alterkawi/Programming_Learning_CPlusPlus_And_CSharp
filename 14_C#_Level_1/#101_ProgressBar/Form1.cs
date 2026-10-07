namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        bool isPaused = false;

        public Form1()
        {
            InitializeComponent();

            // Timer settings
            timer1.Interval = 500;

            // Initial button states
            button1.Enabled = true;   // Start
            button2.Enabled = false;  // Pause
            button3.Enabled = false;  // Stop
            button4.Enabled = false;  // Reset

            progressBar1.Minimum = 0;
            progressBar1.Maximum = 100;
            progressBar1.Value = 0;

            label1.Text = "0%";
        }


        // Start
        private void button1_Click(object sender, EventArgs e)
        {
            isPaused = false;

            button1.Enabled = false;
            button2.Enabled = true;
            button3.Enabled = true;
            button4.Enabled = true;

            button2.Text = "Pause";

            timer1.Start();
        }


        // Timer
        private void timer1_Tick(object sender, EventArgs e)
        {
            if (progressBar1.Value < progressBar1.Maximum)
            {
                progressBar1.Value++;

                label1.Text = progressBar1.Value + "%";
            }
            else
            {
                timer1.Stop();

                button1.Enabled = false;
                button2.Enabled = false;
                button3.Enabled = false;
                button4.Enabled = true;
            }
        }


        // Pause / Resume
        private void button2_Click(object sender, EventArgs e)
        {
            if (isPaused == false)
            {
                // Pause
                isPaused = true;
                timer1.Stop();

                button2.Text = "Resume";
            }
            else
            {
                // Resume
                isPaused = false;
                timer1.Start();

                button2.Text = "Pause";
            }
        }


        // Stop
        private void button3_Click(object sender, EventArgs e)
        {
            timer1.Stop();

            isPaused = false;

            button1.Enabled = false;
            button2.Enabled = false;
            button3.Enabled = false;
            button4.Enabled = true;

            button2.Text = "Pause";
        }


        // Reset
        private void button4_Click(object sender, EventArgs e)
        {
            timer1.Stop();

            progressBar1.Value = 0;
            label1.Text = "0%";

            isPaused = false;

            button1.Enabled = true;
            button2.Enabled = false;
            button3.Enabled = false;
            button4.Enabled = false;

            button2.Text = "Pause";
        }
    }
}
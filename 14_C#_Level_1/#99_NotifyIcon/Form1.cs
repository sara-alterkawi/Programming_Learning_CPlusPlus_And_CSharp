namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            notifyIcon1.Icon = SystemIcons.Application;
            notifyIcon1.BalloonTipIcon = ToolTipIcon.Info;
            notifyIcon1.BalloonTipTitle = "This is the title.";
            notifyIcon1.BalloonTipText = "This is the message.";
            notifyIcon1.ShowBalloonTip(5000); // Show for 5 seconds
        }

        private void notifyIcon1_BalloonTipClicked(object sender, EventArgs e)
        {
            MessageBox.Show("You clicked the notification icon!");
        }
    }
}

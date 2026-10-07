namespace Drawing
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            // Create a pen with a width of 10 and a color of black
            Color Black = Color.FromArgb(255, 0, 0, 0);
            Pen Pen = new Pen(Black);
            // Set the width of the pen
            Pen.Width = 10;
            // Set the start and end caps of the pen to round
            Pen.StartCap = System.Drawing.Drawing2D.LineCap.Round;
            Pen.EndCap = System.Drawing.Drawing2D.LineCap.Round;
            // Draw a line from start point to end point
            e.Graphics.DrawLine(Pen, 100, 100, 100, 200);

            // Create a pen with a width of 10 and a color of red
            Color Red = Color.FromArgb(255, 255, 0, 0);
            Pen = new Pen(Red);
            // Set the width of the pen
            Pen.Width = 5;
            // Set the start and end caps of the pen to custom
            Pen.StartCap = System.Drawing.Drawing2D.LineCap.Custom;
            Pen.EndCap = System.Drawing.Drawing2D.LineCap.Custom;
            // Draw a rectangle with the top-left corner at (200, 200) and a width and height of 300
            e.Graphics.DrawRectangle(Pen, 200, 200, 300, 300);

            // Create a pen with a width of 10 and a color of blue
            Color Blue = Color.FromArgb(255, 0, 0, 255);
            Pen = new Pen(Blue);
            // Set the width of the pen
            Pen.Width = 8;
            // Set the start and end caps of the pen to custom
            Pen.StartCap = System.Drawing.Drawing2D.LineCap.Custom;
            Pen.EndCap = System.Drawing.Drawing2D.LineCap.Custom;
            // Draw an ellipse with the top-left corner at (200, 50) and a width of 100 and a height of 120
            e.Graphics.DrawEllipse(Pen, 200, 50, 100, 120);
        }
    }
}

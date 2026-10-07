using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Exercise.Properties;

namespace Exercise
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void rdBtnBoy_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Boy;
            lblTitle.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rdBtnGirl_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Girl;
            lblTitle.Text = ((RadioButton)sender).Tag.ToString();

        }

        private void rdBtnBook_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Book;
            lblTitle.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rdBtnPen_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Pen;
            lblTitle.Text = ((RadioButton)sender).Tag.ToString();
        }
    }
}

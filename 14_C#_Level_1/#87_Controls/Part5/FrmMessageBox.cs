using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Part5
{
    public partial class FrmMessageBox : Form
    {
        public FrmMessageBox()
        {
            InitializeComponent();
        }

        private void btnShowMessage_Click(object sender, EventArgs e)
        {
            MessageBox.Show("This is a message box.");
        }

        private void btnShowMessageWithTitle_Click(object sender, EventArgs e)
        {
            MessageBox.Show("This is a message box with a title.", "Message Box Title");
        }

        private void btnShowMessageMulti_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Do you want to continue?", "Confirm", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                MessageBox.Show("You clicked Yes.", "Confirmation");
            }
            else
            {
                MessageBox.Show("You clicked No.", "Confirmation");
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Do you want to continue?", "Confirm", MessageBoxButtons.YesNo, MessageBoxIcon.Exclamation) == DialogResult.Yes)
            {
                MessageBox.Show("You clicked Yes.", "Confirmation");
            }
            else
            {
                MessageBox.Show("You clicked No.", "Confirmation");
            }
        }

        private void btnDef_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Do you want to continue?", "Confirm", MessageBoxButtons.YesNo, MessageBoxIcon.Exclamation, MessageBoxDefaultButton.Button2) == DialogResult.Yes)
            {
                MessageBox.Show("You clicked Yes.", "Confirmation");
            }
            else
            {
                MessageBox.Show("You clicked No.", "Confirmation");
            }
        }
    }
}

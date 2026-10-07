using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Part6
{
    public partial class FrmMain : Form
    {
        public FrmMain()
        {
            InitializeComponent();
        }

        private void btnShowForm1_Click(object sender, EventArgs e)
        {
            Form frm1 = new Form1();
            frm1.ShowDialog();
        }

        private void btnMessageBoxForm_Click(object sender, EventArgs e)
        {
            Form frm1 = new FrmMessageBox();
            frm1.ShowDialog();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form frm1 = new FrmChkRadioGroup();
            frm1.ShowDialog();
        }
    }
}

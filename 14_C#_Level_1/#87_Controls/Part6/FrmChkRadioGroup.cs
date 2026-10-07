using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Part6
{
    public partial class FrmChkRadioGroup : Form
    {
        public FrmChkRadioGroup()
        {
            InitializeComponent();
        }

        private void btnShowValue_Click(object sender, EventArgs e)
        {
            MessageBox.Show(chkRecive.Checked.ToString());
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show(rdBtnSmall.Checked.ToString());
        }
    }
}

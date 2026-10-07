using System.Xml.Linq;

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
            // Check ID and Name
            if (string.IsNullOrWhiteSpace(textBox1.Text) ||
                string.IsNullOrWhiteSpace(textBox2.Text))
            {
                MessageBox.Show("Please enter ID and Name.");
                return;
            }

            // Check Gender
            if (!radioButton1.Checked && !radioButton2.Checked)
            {
                MessageBox.Show("Please select Gender.");
                return;
            }

            // Check if ID already exists
            foreach (ListViewItem existingItem in listView1.Items)
            {
                if (existingItem.Text == textBox1.Text.Trim())
                {
                    MessageBox.Show("This ID already exists.");
                    return;
                }
            }

            // Create ListView item
            ListViewItem item = new ListViewItem(textBox1.Text.Trim());

            // Set image according to gender
            if (radioButton1.Checked)
                item.ImageIndex = 1;
            else
                item.ImageIndex = 0;

            // Add Name
            item.SubItems.Add(textBox2.Text.Trim());

            // Add item to ListView
            listView1.Items.Add(item);

            // Clear inputs
            textBox1.Clear();
            textBox2.Clear();

            // Reset gender selection
            radioButton1.Checked = false;
            radioButton2.Checked = false;

            // Focus on ID
            textBox1.Focus();
        }


        private void button3_Click(object sender, EventArgs e)
        {
            for (int i = 1; i <= 10; i++)
            {
                ListViewItem item = new ListViewItem(i.ToString());

                if (i % 2 == 0)
                    item.ImageIndex = 1;
                else
                    item.ImageIndex = 0;

                item.SubItems.Add("Person" + i);
                listView1.Items.Add(item);
            }
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            listView1.View = View.Details;
        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            listView1.View = View.LargeIcon;
        }

        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            listView1.View = View.SmallIcon;
        }

        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {
            listView1.View = View.List;
        }

        private void radioButton7_CheckedChanged(object sender, EventArgs e)
        {
            listView1.View = View.Tile;
        }

        private void listView1_DoubleClick(object sender, EventArgs e)
        {
            MessageBox.Show(listView1.SelectedItems[0].Text);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count > 0)
            {
                listView1.SelectedItems[0].Remove();
            }
            else
            {
                MessageBox.Show("Please select an item to delete.");
            }
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }
    }
}

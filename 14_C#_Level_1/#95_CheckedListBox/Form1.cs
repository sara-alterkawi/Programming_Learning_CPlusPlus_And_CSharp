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
            for (int i = 1; i <= 5; i++)
            {
                checkedListBox1.Items.Add("Item" + i);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < checkedListBox1.CheckedItems.Count; i++)
            {
                MessageBox.Show(checkedListBox1.CheckedItems[i].ToString());
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < checkedListBox1.Items.Count; i++)
            {
                checkedListBox1.SetItemChecked(i, true);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < checkedListBox1.Items.Count; i++)
            {
                checkedListBox1.SetItemChecked(i, false);
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            // Remove last item from the checkedListBox1
            if (checkedListBox1.Items.Count > 0)
            {
                checkedListBox1.Items.RemoveAt(checkedListBox1.Items.Count - 1);
            }
        }
    }
}




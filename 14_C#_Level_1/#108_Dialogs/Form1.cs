using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnChangBackColor_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)

            {
                textBox1.BackColor = colorDialog1.Color;
            }
        }

        private void btnChangeForeColor_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox1.ForeColor = colorDialog1.Color;
            }
        }

        private void btnChangeFont_Click(object sender, EventArgs e)
        {
            // Show 
            fontDialog1.ShowColor = true;
            // 
            fontDialog1.ShowApply = true;
            // 
            fontDialog1.ShowEffects = true;
            // 
            fontDialog1.Font = textBox1.Font;

            if (fontDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox1.Font = fontDialog1.Font;
                textBox1.ForeColor = fontDialog1.Color;
            }
        }

        private void fontDialog1_Apply(object sender, EventArgs e)
        {
            // 
            textBox1.Font = fontDialog1.Font;
            // 
            textBox1.ForeColor = fontDialog1.Color;
        }

        private void btnSaveFileDialog_Click(object sender, EventArgs e)
        {
            // Set the initial directory for the SaveFileDialog
            saveFileDialog1.InitialDirectory = @"C:\Users\Exptpais\OneDrive - PCG Specialty Chemicals\Desktop\Sara";
            // Set the initial Title for the SaveFileDialog
            saveFileDialog1.Title = "Save File As";
            // Set the default file extension for the SaveFileDialog
            saveFileDialog1.DefaultExt = "txt";
            // Set the filter for the SaveFileDialog to show only text files and all files
            saveFileDialog1.Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
            // Set the filter index to 2, which corresponds to "All files (*.*)"
            saveFileDialog1.FilterIndex = 2;

            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                MessageBox.Show(saveFileDialog1.FileName);
            }
        }

        private void btnOpenFileDialog_Click(object sender, EventArgs e)
        {
            // Set the initial directory for the OpenFileDialog
            openFileDialog1.InitialDirectory = @"C:\Users\Exptpais\OneDrive - PCG Specialty Chemicals\Desktop\Sara";
            // Set the initial Title for the OpenFileDialog
            openFileDialog1.Title = "Open File";
            // Set the filter for the OpenFileDialog to show only text files and all files
            openFileDialog1.Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
            // Set the filter index to 2, which corresponds to "All files (*.*)"
            openFileDialog1.FilterIndex = 2;

            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                MessageBox.Show(openFileDialog1.FileName);
            }
        }

        private void btnOpenFileDialogMulti_Click(object sender, EventArgs e)
        {
            // Set the initial directory for the OpenFileDialog
            openFileDialog1.InitialDirectory = @"C:\Users\Exptpais\OneDrive - PCG Specialty Chemicals\Desktop\Sara";
            // Set the initial Title for the OpenFileDialog
            openFileDialog1.Title = "Open File";
            // Set the filter for the OpenFileDialog to show only text files and all files
            openFileDialog1.Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
            // Set the filter index to 2, which corresponds to "All files (*.*)"
            openFileDialog1.FilterIndex = 2;
            // Enable multi select
            openFileDialog1.Multiselect = true;
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                foreach (string file in openFileDialog1.FileNames)
                {
                    MessageBox.Show(openFileDialog1.FileName);
                }
            }
        }

        private void btnFolderBrowserDialog_Click(object sender, EventArgs e)
        {
            // 
            folderBrowserDialog1.ShowNewFolderButton= true;

            if (folderBrowserDialog1.ShowDialog() == DialogResult.OK)
            {
                MessageBox.Show(folderBrowserDialog1.SelectedPath);
            }
        }
    }

}

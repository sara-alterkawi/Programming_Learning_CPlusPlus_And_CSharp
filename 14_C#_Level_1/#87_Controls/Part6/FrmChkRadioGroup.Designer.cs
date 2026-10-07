namespace Part6
{
    partial class FrmChkRadioGroup
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            chkRecive = new CheckBox();
            rdBtnSmall = new RadioButton();
            rdBtnMedium = new RadioButton();
            rdBtnLarge = new RadioButton();
            gpBox2 = new GroupBox();
            rdBtnThick = new RadioButton();
            rdBtnThin = new RadioButton();
            gpBox1 = new GroupBox();
            gpBox2.SuspendLayout();
            gpBox1.SuspendLayout();
            SuspendLayout();
            // 
            // chkRecive
            // 
            chkRecive.AutoSize = true;
            chkRecive.Location = new Point(69, 48);
            chkRecive.Name = "chkRecive";
            chkRecive.Size = new Size(176, 29);
            chkRecive.TabIndex = 0;
            chkRecive.Text = "Do you approve?";
            chkRecive.UseVisualStyleBackColor = true;
            // 
            // rdBtnSmall
            // 
            rdBtnSmall.AutoSize = true;
            rdBtnSmall.Location = new Point(6, 21);
            rdBtnSmall.Name = "rdBtnSmall";
            rdBtnSmall.Size = new Size(80, 29);
            rdBtnSmall.TabIndex = 6;
            rdBtnSmall.TabStop = true;
            rdBtnSmall.Text = "Small";
            rdBtnSmall.UseVisualStyleBackColor = true;
            // 
            // rdBtnMedium
            // 
            rdBtnMedium.AutoSize = true;
            rdBtnMedium.Location = new Point(6, 63);
            rdBtnMedium.Name = "rdBtnMedium";
            rdBtnMedium.Size = new Size(103, 29);
            rdBtnMedium.TabIndex = 7;
            rdBtnMedium.TabStop = true;
            rdBtnMedium.Text = "Medium";
            rdBtnMedium.UseVisualStyleBackColor = true;
            // 
            // rdBtnLarge
            // 
            rdBtnLarge.AutoSize = true;
            rdBtnLarge.Location = new Point(6, 109);
            rdBtnLarge.Name = "rdBtnLarge";
            rdBtnLarge.Size = new Size(80, 29);
            rdBtnLarge.TabIndex = 8;
            rdBtnLarge.TabStop = true;
            rdBtnLarge.Text = "Large";
            rdBtnLarge.UseVisualStyleBackColor = true;
            // 
            // gpBox2
            // 
            gpBox2.Controls.Add(rdBtnThick);
            gpBox2.Controls.Add(rdBtnThin);
            gpBox2.Location = new Point(571, 48);
            gpBox2.Name = "gpBox2";
            gpBox2.Size = new Size(140, 146);
            gpBox2.TabIndex = 9;
            gpBox2.TabStop = false;
            gpBox2.Text = "Deg";
            // 
            // rdBtnThick
            // 
            rdBtnThick.AutoSize = true;
            rdBtnThick.Location = new Point(6, 63);
            rdBtnThick.Name = "rdBtnThick";
            rdBtnThick.Size = new Size(77, 29);
            rdBtnThick.TabIndex = 10;
            rdBtnThick.TabStop = true;
            rdBtnThick.Text = "Thick";
            rdBtnThick.UseVisualStyleBackColor = true;
            // 
            // rdBtnThin
            // 
            rdBtnThin.AutoSize = true;
            rdBtnThin.Location = new Point(6, 21);
            rdBtnThin.Name = "rdBtnThin";
            rdBtnThin.Size = new Size(70, 29);
            rdBtnThin.TabIndex = 9;
            rdBtnThin.TabStop = true;
            rdBtnThin.Text = "Thin";
            rdBtnThin.UseVisualStyleBackColor = true;
            // 
            // gpBox1
            // 
            gpBox1.Controls.Add(rdBtnMedium);
            gpBox1.Controls.Add(rdBtnSmall);
            gpBox1.Controls.Add(rdBtnLarge);
            gpBox1.Location = new Point(322, 48);
            gpBox1.Name = "gpBox1";
            gpBox1.Size = new Size(140, 146);
            gpBox1.TabIndex = 10;
            gpBox1.TabStop = false;
            gpBox1.Text = "Size";
            // 
            // FrmChkRadioGroup
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(gpBox1);
            Controls.Add(gpBox2);
            Controls.Add(chkRecive);
            Name = "FrmChkRadioGroup";
            Text = "FrmChkRadioGroup";
            gpBox2.ResumeLayout(false);
            gpBox2.PerformLayout();
            gpBox1.ResumeLayout(false);
            gpBox1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private CheckBox chkRecive;
        private RadioButton rdBtnSmall;
        private RadioButton rdBtnMedium;
        private RadioButton rdBtnLarge;
        private GroupBox gpBox2;
        private GroupBox gpBox1;
        private RadioButton rdBtnThick;
        private RadioButton rdBtnThin;
    }
}
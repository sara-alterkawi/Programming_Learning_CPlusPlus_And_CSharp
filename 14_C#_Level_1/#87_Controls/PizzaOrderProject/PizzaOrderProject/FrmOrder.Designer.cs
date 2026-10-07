namespace PizzaOrderProject
{
    partial class FrmOrder
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
            gpSize = new GroupBox();
            rdBtnLarge = new RadioButton();
            rdBtnMedium = new RadioButton();
            rdBtnSmall = new RadioButton();
            gpCrust = new GroupBox();
            rdBtnStuffed = new RadioButton();
            rdBtnThick = new RadioButton();
            rdBtnThin = new RadioButton();
            gpTopping = new GroupBox();
            chkTomatoes = new CheckBox();
            chkOlives = new CheckBox();
            chkMushrooms = new CheckBox();
            chkGreenPeppers = new CheckBox();
            chkOnion = new CheckBox();
            chkExtraCheese = new CheckBox();
            gpWhereToEat = new GroupBox();
            rdBtnEatIn = new RadioButton();
            rdBtnTakeAway = new RadioButton();
            lblCrust = new Label();
            lblSize = new Label();
            lblTopping = new Label();
            lblWhereToEat = new Label();
            btnPlaceOrder = new Button();
            btnReset = new Button();
            lblTotalPrice = new Label();
            gpSize.SuspendLayout();
            gpCrust.SuspendLayout();
            gpTopping.SuspendLayout();
            gpWhereToEat.SuspendLayout();
            SuspendLayout();
            // 
            // gpSize
            // 
            gpSize.BackColor = Color.Transparent;
            gpSize.Controls.Add(rdBtnLarge);
            gpSize.Controls.Add(rdBtnMedium);
            gpSize.Controls.Add(rdBtnSmall);
            gpSize.Location = new Point(134, 326);
            gpSize.Margin = new Padding(4, 4, 4, 4);
            gpSize.Name = "gpSize";
            gpSize.Padding = new Padding(4, 4, 4, 4);
            gpSize.Size = new Size(660, 279);
            gpSize.TabIndex = 0;
            gpSize.TabStop = false;
            // 
            // rdBtnLarge
            // 
            rdBtnLarge.AutoSize = true;
            rdBtnLarge.Location = new Point(500, 166);
            rdBtnLarge.Margin = new Padding(4, 4, 4, 4);
            rdBtnLarge.Name = "rdBtnLarge";
            rdBtnLarge.Size = new Size(56, 36);
            rdBtnLarge.TabIndex = 2;
            rdBtnLarge.Tag = "40";
            rdBtnLarge.Text = "L";
            rdBtnLarge.UseVisualStyleBackColor = true;
            // 
            // rdBtnMedium
            // 
            rdBtnMedium.AutoSize = true;
            rdBtnMedium.Location = new Point(279, 166);
            rdBtnMedium.Margin = new Padding(4, 4, 4, 4);
            rdBtnMedium.Name = "rdBtnMedium";
            rdBtnMedium.Size = new Size(67, 36);
            rdBtnMedium.TabIndex = 1;
            rdBtnMedium.Tag = "30";
            rdBtnMedium.Text = "M";
            rdBtnMedium.UseVisualStyleBackColor = true;
            rdBtnMedium.CheckedChanged += rdBtnMedium_CheckedChanged;
            // 
            // rdBtnSmall
            // 
            rdBtnSmall.AutoSize = true;
            rdBtnSmall.Location = new Point(75, 166);
            rdBtnSmall.Margin = new Padding(4, 4, 4, 4);
            rdBtnSmall.Name = "rdBtnSmall";
            rdBtnSmall.Size = new Size(58, 36);
            rdBtnSmall.TabIndex = 0;
            rdBtnSmall.Tag = "20";
            rdBtnSmall.Text = "S";
            rdBtnSmall.UseVisualStyleBackColor = true;
            rdBtnSmall.CheckedChanged += rdBtnSmall_CheckedChanged;
            // 
            // gpCrust
            // 
            gpCrust.BackColor = Color.Transparent;
            gpCrust.Controls.Add(rdBtnStuffed);
            gpCrust.Controls.Add(rdBtnThick);
            gpCrust.Controls.Add(rdBtnThin);
            gpCrust.Location = new Point(856, 320);
            gpCrust.Margin = new Padding(4, 4, 4, 4);
            gpCrust.Name = "gpCrust";
            gpCrust.Padding = new Padding(4, 4, 4, 4);
            gpCrust.Size = new Size(692, 285);
            gpCrust.TabIndex = 3;
            gpCrust.TabStop = false;
            // 
            // rdBtnStuffed
            // 
            rdBtnStuffed.AutoSize = true;
            rdBtnStuffed.Location = new Point(520, 172);
            rdBtnStuffed.Margin = new Padding(4, 4, 4, 4);
            rdBtnStuffed.Name = "rdBtnStuffed";
            rdBtnStuffed.Size = new Size(122, 36);
            rdBtnStuffed.TabIndex = 5;
            rdBtnStuffed.Tag = "15";
            rdBtnStuffed.Text = "Stuffed";
            rdBtnStuffed.UseVisualStyleBackColor = true;
            rdBtnStuffed.CheckedChanged += rdBtnStuffed_CheckedChanged;
            // 
            // rdBtnThick
            // 
            rdBtnThick.AutoSize = true;
            rdBtnThick.Location = new Point(263, 172);
            rdBtnThick.Margin = new Padding(4, 4, 4, 4);
            rdBtnThick.Name = "rdBtnThick";
            rdBtnThick.Size = new Size(101, 36);
            rdBtnThick.TabIndex = 4;
            rdBtnThick.Tag = "10";
            rdBtnThick.Text = "Thick";
            rdBtnThick.UseVisualStyleBackColor = true;
            rdBtnThick.CheckedChanged += rdBtnThick_CheckedChanged;
            // 
            // rdBtnThin
            // 
            rdBtnThin.AutoSize = true;
            rdBtnThin.Location = new Point(42, 172);
            rdBtnThin.Margin = new Padding(4, 4, 4, 4);
            rdBtnThin.Name = "rdBtnThin";
            rdBtnThin.Size = new Size(92, 36);
            rdBtnThin.TabIndex = 3;
            rdBtnThin.Tag = "0";
            rdBtnThin.Text = "Thin";
            rdBtnThin.UseVisualStyleBackColor = true;
            rdBtnThin.CheckedChanged += rdBtnThin_CheckedChanged;
            // 
            // gpTopping
            // 
            gpTopping.BackColor = Color.Transparent;
            gpTopping.Controls.Add(chkTomatoes);
            gpTopping.Controls.Add(chkOlives);
            gpTopping.Controls.Add(chkMushrooms);
            gpTopping.Controls.Add(chkGreenPeppers);
            gpTopping.Controls.Add(chkOnion);
            gpTopping.Controls.Add(chkExtraCheese);
            gpTopping.Location = new Point(134, 660);
            gpTopping.Margin = new Padding(4, 4, 4, 4);
            gpTopping.Name = "gpTopping";
            gpTopping.Padding = new Padding(4, 4, 4, 4);
            gpTopping.Size = new Size(1421, 284);
            gpTopping.TabIndex = 3;
            gpTopping.TabStop = false;
            // 
            // chkTomatoes
            // 
            chkTomatoes.AutoSize = true;
            chkTomatoes.Location = new Point(1265, 158);
            chkTomatoes.Margin = new Padding(4, 4, 4, 4);
            chkTomatoes.Name = "chkTomatoes";
            chkTomatoes.Size = new Size(149, 36);
            chkTomatoes.TabIndex = 11;
            chkTomatoes.Tag = "5";
            chkTomatoes.Text = "Tomatoes";
            chkTomatoes.UseVisualStyleBackColor = true;
            chkTomatoes.CheckedChanged += chkTomatoes_CheckedChanged;
            // 
            // chkOlives
            // 
            chkOlives.AutoSize = true;
            chkOlives.Location = new Point(1009, 157);
            chkOlives.Margin = new Padding(4, 4, 4, 4);
            chkOlives.Name = "chkOlives";
            chkOlives.Size = new Size(111, 36);
            chkOlives.TabIndex = 10;
            chkOlives.Tag = "5";
            chkOlives.Text = "Olives";
            chkOlives.UseVisualStyleBackColor = true;
            chkOlives.CheckedChanged += chkOlives_CheckedChanged;
            // 
            // chkMushrooms
            // 
            chkMushrooms.AutoSize = true;
            chkMushrooms.Location = new Point(744, 158);
            chkMushrooms.Margin = new Padding(4, 4, 4, 4);
            chkMushrooms.Name = "chkMushrooms";
            chkMushrooms.Size = new Size(173, 36);
            chkMushrooms.TabIndex = 9;
            chkMushrooms.Tag = "5";
            chkMushrooms.Text = "Mushrooms";
            chkMushrooms.UseVisualStyleBackColor = true;
            chkMushrooms.CheckedChanged += chkMushrooms_CheckedChanged;
            // 
            // chkGreenPeppers
            // 
            chkGreenPeppers.AutoSize = true;
            chkGreenPeppers.Location = new Point(501, 158);
            chkGreenPeppers.Margin = new Padding(4, 4, 4, 4);
            chkGreenPeppers.Name = "chkGreenPeppers";
            chkGreenPeppers.Size = new Size(201, 36);
            chkGreenPeppers.TabIndex = 8;
            chkGreenPeppers.Tag = "5";
            chkGreenPeppers.Text = "Green Peppers";
            chkGreenPeppers.UseVisualStyleBackColor = true;
            chkGreenPeppers.CheckedChanged += chkGreenPeppers_CheckedChanged;
            // 
            // chkOnion
            // 
            chkOnion.AutoSize = true;
            chkOnion.Location = new Point(295, 159);
            chkOnion.Margin = new Padding(4, 4, 4, 4);
            chkOnion.Name = "chkOnion";
            chkOnion.Size = new Size(112, 36);
            chkOnion.TabIndex = 7;
            chkOnion.Tag = "5";
            chkOnion.Text = "Onion";
            chkOnion.UseVisualStyleBackColor = true;
            chkOnion.CheckedChanged += chkOnion_CheckedChanged;
            // 
            // chkExtraCheese
            // 
            chkExtraCheese.AutoSize = true;
            chkExtraCheese.Location = new Point(31, 158);
            chkExtraCheese.Margin = new Padding(4, 4, 4, 4);
            chkExtraCheese.Name = "chkExtraCheese";
            chkExtraCheese.Size = new Size(182, 36);
            chkExtraCheese.TabIndex = 6;
            chkExtraCheese.Tag = "5";
            chkExtraCheese.Text = "Extra Cheese";
            chkExtraCheese.UseVisualStyleBackColor = true;
            chkExtraCheese.CheckedChanged += chkExtraCheese_CheckedChanged;
            // 
            // gpWhereToEat
            // 
            gpWhereToEat.BackColor = Color.Transparent;
            gpWhereToEat.Controls.Add(rdBtnEatIn);
            gpWhereToEat.Controls.Add(rdBtnTakeAway);
            gpWhereToEat.Location = new Point(134, 995);
            gpWhereToEat.Margin = new Padding(4, 4, 4, 4);
            gpWhereToEat.Name = "gpWhereToEat";
            gpWhereToEat.Padding = new Padding(4, 4, 4, 4);
            gpWhereToEat.Size = new Size(1421, 145);
            gpWhereToEat.TabIndex = 4;
            gpWhereToEat.TabStop = false;
            // 
            // rdBtnEatIn
            // 
            rdBtnEatIn.AutoSize = true;
            rdBtnEatIn.Location = new Point(1186, 74);
            rdBtnEatIn.Margin = new Padding(4, 4, 4, 4);
            rdBtnEatIn.Name = "rdBtnEatIn";
            rdBtnEatIn.Size = new Size(27, 26);
            rdBtnEatIn.TabIndex = 13;
            rdBtnEatIn.UseVisualStyleBackColor = true;
            rdBtnEatIn.CheckedChanged += rdBtnEatIn_CheckedChanged;
            // 
            // rdBtnTakeAway
            // 
            rdBtnTakeAway.AutoSize = true;
            rdBtnTakeAway.Location = new Point(456, 74);
            rdBtnTakeAway.Margin = new Padding(4, 4, 4, 4);
            rdBtnTakeAway.Name = "rdBtnTakeAway";
            rdBtnTakeAway.Size = new Size(27, 26);
            rdBtnTakeAway.TabIndex = 12;
            rdBtnTakeAway.UseVisualStyleBackColor = true;
            rdBtnTakeAway.CheckedChanged += rdBtnTakeAway_CheckedChanged;
            // 
            // lblCrust
            // 
            lblCrust.AutoSize = true;
            lblCrust.BackColor = Color.Transparent;
            lblCrust.Font = new Font("Segoe UI", 10F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblCrust.Location = new Point(1843, 275);
            lblCrust.Margin = new Padding(4, 0, 4, 0);
            lblCrust.Name = "lblCrust";
            lblCrust.Size = new Size(179, 37);
            lblCrust.TabIndex = 15;
            lblCrust.Text = "Not selected";
            // 
            // lblSize
            // 
            lblSize.AutoSize = true;
            lblSize.BackColor = Color.Transparent;
            lblSize.Font = new Font("Segoe UI", 10F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblSize.Location = new Point(1843, 201);
            lblSize.Margin = new Padding(4, 0, 4, 0);
            lblSize.Name = "lblSize";
            lblSize.Size = new Size(179, 37);
            lblSize.TabIndex = 14;
            lblSize.Text = "Not selected";
            // 
            // lblTopping
            // 
            lblTopping.AutoSize = true;
            lblTopping.BackColor = Color.Transparent;
            lblTopping.Font = new Font("Segoe UI", 10F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTopping.Location = new Point(1843, 353);
            lblTopping.Margin = new Padding(4, 0, 4, 0);
            lblTopping.Name = "lblTopping";
            lblTopping.Size = new Size(180, 37);
            lblTopping.TabIndex = 16;
            lblTopping.Text = "No Toppings";
            // 
            // lblWhereToEat
            // 
            lblWhereToEat.AutoSize = true;
            lblWhereToEat.BackColor = Color.Transparent;
            lblWhereToEat.Font = new Font("Segoe UI", 10F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblWhereToEat.Location = new Point(1843, 592);
            lblWhereToEat.Margin = new Padding(4, 0, 4, 0);
            lblWhereToEat.Name = "lblWhereToEat";
            lblWhereToEat.Size = new Size(179, 37);
            lblWhereToEat.TabIndex = 17;
            lblWhereToEat.Text = "Not selected";
            // 
            // btnPlaceOrder
            // 
            btnPlaceOrder.BackColor = Color.Transparent;
            btnPlaceOrder.Cursor = Cursors.Hand;
            btnPlaceOrder.FlatAppearance.BorderSize = 0;
            btnPlaceOrder.FlatAppearance.MouseDownBackColor = Color.Transparent;
            btnPlaceOrder.FlatAppearance.MouseOverBackColor = Color.Transparent;
            btnPlaceOrder.FlatStyle = FlatStyle.Flat;
            btnPlaceOrder.Location = new Point(1611, 958);
            btnPlaceOrder.Margin = new Padding(4, 4, 4, 4);
            btnPlaceOrder.Name = "btnPlaceOrder";
            btnPlaceOrder.Size = new Size(412, 70);
            btnPlaceOrder.TabIndex = 9;
            btnPlaceOrder.UseVisualStyleBackColor = false;
            btnPlaceOrder.Click += btnPlaceOrder_Click;
            // 
            // btnReset
            // 
            btnReset.BackColor = Color.Transparent;
            btnReset.Cursor = Cursors.Hand;
            btnReset.FlatAppearance.BorderSize = 0;
            btnReset.FlatAppearance.MouseDownBackColor = Color.Transparent;
            btnReset.FlatAppearance.MouseOverBackColor = Color.Transparent;
            btnReset.FlatStyle = FlatStyle.Flat;
            btnReset.Location = new Point(1611, 1058);
            btnReset.Margin = new Padding(4, 4, 4, 4);
            btnReset.Name = "btnReset";
            btnReset.Size = new Size(412, 82);
            btnReset.TabIndex = 10;
            btnReset.UseVisualStyleBackColor = false;
            btnReset.Click += btnReset_Click;
            // 
            // lblTotalPrice
            // 
            lblTotalPrice.AutoSize = true;
            lblTotalPrice.BackColor = Color.Transparent;
            lblTotalPrice.Font = new Font("Segoe UI", 10F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTotalPrice.Location = new Point(1843, 817);
            lblTotalPrice.Margin = new Padding(4, 0, 4, 0);
            lblTotalPrice.Name = "lblTotalPrice";
            lblTotalPrice.Size = new Size(33, 37);
            lblTotalPrice.TabIndex = 11;
            lblTotalPrice.Text = "0";
            // 
            // FrmOrder
            // 
            AutoScaleDimensions = new SizeF(13F, 32F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.ControlLight;
            BackgroundImage = Properties.Resources.Pizza_Order;
            BackgroundImageLayout = ImageLayout.Zoom;
            ClientSize = new Size(2123, 1198);
            Controls.Add(lblTotalPrice);
            Controls.Add(btnReset);
            Controls.Add(btnPlaceOrder);
            Controls.Add(lblWhereToEat);
            Controls.Add(lblTopping);
            Controls.Add(lblSize);
            Controls.Add(lblCrust);
            Controls.Add(gpWhereToEat);
            Controls.Add(gpTopping);
            Controls.Add(gpCrust);
            Controls.Add(gpSize);
            FormBorderStyle = FormBorderStyle.None;
            Margin = new Padding(4, 4, 4, 4);
            Name = "FrmOrder";
            Text = "FrmOrder";
            gpSize.ResumeLayout(false);
            gpSize.PerformLayout();
            gpCrust.ResumeLayout(false);
            gpCrust.PerformLayout();
            gpTopping.ResumeLayout(false);
            gpTopping.PerformLayout();
            gpWhereToEat.ResumeLayout(false);
            gpWhereToEat.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private GroupBox gpSize;
        private RadioButton rdBtnSmall;
        private RadioButton rdBtnLarge;
        private RadioButton rdBtnMedium;
        private GroupBox gpCrust;
        private RadioButton rdBtnStuffed;
        private RadioButton rdBtnThick;
        private RadioButton rdBtnThin;
        private GroupBox gpTopping;
        private GroupBox gpWhereToEat;
        private RadioButton rdBtnEatIn;
        private RadioButton rdBtnTakeAway;
        private Label lblCrust;
        private Label lblSize;
        private Label lblTopping;
        private Label lblWhereToEat;
        private Button btnPlaceOrder;
        private Button btnReset;
        private Label lblTotalPrice;
        private CheckBox chkExtraCheese;
        private CheckBox chkOnion;
        private CheckBox chkGreenPeppers;
        private CheckBox chkMushrooms;
        private CheckBox chkOlives;
        private CheckBox chkTomatoes;
    }
}
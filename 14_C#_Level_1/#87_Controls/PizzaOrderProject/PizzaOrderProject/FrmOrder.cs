using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Reflection.Emit;
using System.Text;
using System.Windows.Forms;

namespace PizzaOrderProject
{
    public partial class FrmOrder : Form
    {
        private bool _isOrderStarted = false;
        public FrmOrder()
        {
            InitializeComponent();
        }

        // Event handler for the form load event
        private void FrmOrder_Load(object sender, EventArgs e)
        {
            // Set the Tag property for size radio buttons
            ResetForm();
        }

        // Method to update the lblSize based on the selected radio button
        private void UpdateLblSize()
        {
            UpdateTotalPrice();
            if (rdBtnSmall.Checked)
            {
                lblSize.Text = "Small";
                return;
            }
            if (rdBtnMedium.Checked)
            {
                lblSize.Text = "Medium";
                return;
            }
            if (rdBtnLarge.Checked)
            {
                lblSize.Text = "Large";
                return;
            }
        }

        // Method to update the lblCrust based on the selected radio button
        private void UpdateLblCrust()
        {
            UpdateTotalPrice();
            if (rdBtnThin.Checked)
            {
                lblCrust.Text = "Thin";
                return;
            }
            if (rdBtnThick.Checked)
            {
                lblCrust.Text = "Thick";
                return;
            }
            if (rdBtnStuffed.Checked)
            {
                lblCrust.Text = "Stuffed";
                return;
            }
        }

        // Method to update the lblTopping based on the selected checkboxes
        private void UpdateLblToppings()
        {
            UpdateTotalPrice();
            List<string> toppings = new List<string>();

            if (chkExtraCheese.Checked)
            {
                toppings.Add("Extra Cheese");
            }
            if (chkMushrooms.Checked)
            {
                toppings.Add("Mushrooms");
            }
            if (chkTomatoes.Checked)
            {
                toppings.Add("Tomatoes");
            }
            if (chkOlives.Checked)
            {
                toppings.Add("Olives");
            }
            if (chkGreenPeppers.Checked)
            {
                toppings.Add("Green Peppers");
            }
            if (chkOnion.Checked)
            {
                toppings.Add("Onion");
            }
            if (toppings.Count > 0)
            {
                // Join the toppings with a new line separator and set it to lblTopping
                lblTopping.Text = string.Join(Environment.NewLine, toppings);
            }
            else
            {
                lblTopping.Text = "No Toppings";
            }
        }

        // Method to update the lblWhereToEat based on the selected radio button
        private void UpdategpWhereToEat()
        {
            if (rdBtnTakeAway.Checked)
            {
                lblWhereToEat.Text = "Take Away";
                return;
            }
            if (rdBtnEatIn.Checked)
            {
                lblWhereToEat.Text = "Eat In";
                return;
            }
        }

        // Method to get the price of the selected size based on the radio button's Tag property
        float GetSelectedSizePrice()
        {
            if (rdBtnSmall.Checked)
            {
                return Convert.ToSingle(rdBtnSmall.Tag);
            }
            if (rdBtnMedium.Checked)
            {
                return Convert.ToSingle(rdBtnMedium.Tag);
            }
            if (rdBtnLarge.Checked) return Convert.ToSingle(rdBtnLarge.Tag);

            return 0;
        }

        // Method to get the price of the selected crust based on the radio button's Tag property
        float GetSelectedCrustPrice()
        {
            if (rdBtnThin.Checked)
            {
                return Convert.ToSingle(rdBtnThin.Tag);
            }
            if (rdBtnThick.Checked)
            {
                return Convert.ToSingle(rdBtnThick.Tag);
            }
            if (rdBtnStuffed.Checked) return Convert.ToSingle(rdBtnStuffed.Tag);

            return 0;
        }

        // Method to get the price of the selected toppings based on the checkboxes' Tag property
        float GetSelectedToppingsPrice()
        {
            float toppingsPrice = 0;
            if (chkExtraCheese.Checked)
            {
                toppingsPrice += Convert.ToSingle(chkExtraCheese.Tag);
            }
            if (chkMushrooms.Checked)
            {
                toppingsPrice += Convert.ToSingle(chkMushrooms.Tag);
            }
            if (chkTomatoes.Checked)
            {
                toppingsPrice += Convert.ToSingle(chkTomatoes.Tag);
            }
            if (chkOlives.Checked)
            {
                toppingsPrice += Convert.ToSingle(chkOlives.Tag);
            }
            if (chkGreenPeppers.Checked)
            {
                toppingsPrice += Convert.ToSingle(chkGreenPeppers.Tag);
            }
            if (chkOnion.Checked)
            {
                toppingsPrice += Convert.ToSingle(chkOnion.Tag);
            }
            return toppingsPrice;
        }

        // Method to calculate the total price based on the selected size, crust, and toppings
        float CalculateTotalPrice()
        {
            return GetSelectedSizePrice() + GetSelectedCrustPrice() + GetSelectedToppingsPrice();
        }

        // Method to update the total price based on the selected options
        private void UpdateTotalPrice()
        {
            lblTotalPrice.Text = CalculateTotalPrice().ToString();
        }

        // Method to update the order summary by calling the individual update methods
        void UpdateOrderSummary()
        {
            UpdateLblSize();
            UpdateLblToppings();
            UpdateLblCrust();
            UpdategpWhereToEat();
            UpdateTotalPrice();
        }

        // Method to reset the form to its initial state
        void ResetForm()
        {
            // Reset Groups
            gpSize.Enabled = true;
            gpCrust.Enabled = true;
            gpTopping.Enabled = true;
            gpWhereToEat.Enabled = true;
            // Reset Size
            rdBtnSmall.Checked = false;
            rdBtnMedium.Checked = false;
            rdBtnLarge.Checked = false;
            // Reset Toppings
            chkExtraCheese.Checked = false;
            chkOnion.Checked = false;
            chkMushrooms.Checked = false;
            chkOlives.Checked = false;
            chkTomatoes.Checked = false;
            chkGreenPeppers.Checked = false;
            // Reset CrustType
            rdBtnThin.Checked = false;
            rdBtnThick.Checked = false;
            rdBtnStuffed.Checked = false;
            // Reset Where to Eat
            rdBtnEatIn.Checked = false;
            rdBtnTakeAway.Checked = false;
            // Reset Order Button
            btnPlaceOrder.Enabled = true;
        }

        // Event handler for the Place Order button click event
        private void btnPlaceOrder_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Confirm Order", "Confirm",
                MessageBoxButtons.OKCancel, MessageBoxIcon.Question) == DialogResult.OK)
            {
                MessageBox.Show("Order Placed Successfully", "Success",
                    MessageBoxButtons.OK, MessageBoxIcon.Information);
                btnPlaceOrder.Enabled = false;
                gpSize.Enabled = false;
                gpTopping.Enabled = false;
                gpCrust.Enabled = false;
                gpWhereToEat.Enabled = false;
            }
            else
                MessageBox.Show("Update your order", "Update",
                    MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
        }

        // Event handler for the Reset button click event
        private void btnReset_Click(object sender, EventArgs e)
        {
            ResetForm();
        }

        // Event handlers for radio button checked changes
        private void rdBtnSmall_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblSize();
        }

        // Event handlers for radio button checked changes
        private void rdBtnMedium_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblSize();
        }

        // Event handlers for radio button checked changes
        private void rdBtnLarge_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblSize();
        }

        // Event handlers for radio button checked changes
        private void rdBtnThin_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblCrust();
        }

        // Event handlers for radio button checked changes
        private void rdBtnThick_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblCrust();
        }

        // Event handlers for radio button checked changes
        private void rdBtnStuffed_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblCrust();
        }

        // Event handlers for checkbox checked changes
        private void chkExtraCheese_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblToppings();
        }

        // Event handlers for checkbox checked changes
        private void chkOnion_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblToppings();
        }

        // Event handlers for checkbox checked changes
        private void chkGreenPeppers_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblToppings();
        }

        // Event handlers for checkbox checked changes
        private void chkMushrooms_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblToppings();
        }

        // Event handlers for checkbox checked changes
        private void chkOlives_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblToppings();
        }

        // Event handlers for checkbox checked changes
        private void chkTomatoes_CheckedChanged(object sender, EventArgs e)
        {
            UpdateLblToppings();
        }

        // Event handlers for radio button checked changes
        private void rdBtnTakeAway_CheckedChanged(object sender, EventArgs e)
        {
            UpdategpWhereToEat();
        }

        // Event handlers for radio button checked changes
        private void rdBtnEatIn_CheckedChanged(object sender, EventArgs e)
        {
            UpdategpWhereToEat();
        }
    }
}
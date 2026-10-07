# 🖼️ PictureBox Exercise

📣 **Select an item and watch its image and title appear instantly!**

---

## 🗝️ About This Project

**PictureBox Exercise** is a simple desktop application developed using **C# and Windows Forms**.

The application allows users to select different items using **RadioButtons**. When an item is selected, the corresponding image is displayed inside a **PictureBox**, while its title is displayed in a **Label**.

Each RadioButton is connected to an image stored in the project's **Resources** and uses its **Tag** property to store the item's title.

This project was developed as part of the **C# learning journey** to practice Windows Forms controls, events, resources, and event-driven programming.

---

## 🎯 Project Objectives

The main objectives of this project are to:

* 🖼️ Display images using the `PictureBox` control.
* 🔘 Practice using `RadioButton` controls.
* 🧠 Understand the `sender` parameter in event handlers.
* 🏷️ Practice using the `Tag` property to store additional information.
* ⚡ Handle user interactions using the `CheckedChanged` event.
* 📦 Access images stored in the project's `Resources`.
* 🔄 Update the user interface dynamically based on the selected option.
* 🖥️ Practice building a simple graphical user interface using Windows Forms.

---

## ✨ Features

The application includes:

* 👦 **Boy** — displays the Boy image and title.
* 👧 **Girl** — displays the Girl image and title.
* 📖 **Book** — displays the Book image and title.
* 🖊️ **Pen** — displays the Pen image and title.
* 🖼️ **Dynamic Image Display** — the PictureBox changes according to the selected RadioButton.
* 🏷️ **Dynamic Title Display** — the Label displays the title stored in the selected RadioButton's `Tag`.

---

## 📚 Concepts Practiced

This project focuses on practicing the following C# and Windows Forms concepts:

* 🔹 **RadioButton** controls for selecting one option.
* 🔹 **CheckedChanged Event** for detecting changes in RadioButton selection.
* 🔹 **Event Handlers** for responding to user interactions.
* 🔹 **`sender` Parameter** for identifying the control that triggered an event.
* 🔹 **Type Casting** using `(RadioButton)sender`.
* 🔹 **`Tag` Property** for storing additional information associated with a control.
* 🔹 **`Tag.ToString()`** for converting the stored value into text.
* 🔹 **PictureBox** for displaying images.
* 🔹 **Resources** for storing and accessing application images.
* 🔹 **Dynamic UI Updates** based on user selection.
* 🔹 **Windows Forms UI Development**.

---

## 🧩 How It Works

When the user selects a RadioButton, its `CheckedChanged` event is triggered.

The event handler identifies the selected RadioButton through the `sender` parameter.

The corresponding image is then assigned to the PictureBox, while the RadioButton's `Tag` property is used to display the item's title in the Label.

For example:

```csharp
private void rdBtnBoy_CheckedChanged(object sender, EventArgs e)
{
    pictureBox1.Image = Resources.Boy;
    lblTitle.Text = ((RadioButton)sender).Tag.ToString();
}
```

### 🔍 What Happens in the Code?

* `Resources.Boy` → gets the Boy image from the project's Resources.
* `pictureBox1.Image` → displays the image inside the PictureBox.
* `(RadioButton)sender` → treats the event sender as a RadioButton.
* `.Tag` → retrieves the value stored in the RadioButton's Tag property.
* `.ToString()` → converts the Tag value into a string.
* `lblTitle.Text` → displays the title in the Label.

---

## ⚠️ Important Notes

* The `CheckedChanged` event can be triggered when a RadioButton becomes **checked or unchecked**.
* If multiple RadioButtons share the same event handler, checking the `Checked` property can ensure the code only runs for the selected RadioButton.
* The `Tag` property has the type `object`, so `.ToString()` is commonly used when displaying its value as text.
* Make sure the required images are added to the project's **Resources** before using them in code.
* The images can then be accessed through resources such as `Resources.Boy`, `Resources.Girl`, `Resources.Book`, and `Resources.Pen`.

---

## 🛠️ Built With

* **C#**
* **Windows Forms (.NET)**
* **Visual Studio**

---

## ⬇️ How to Run

### Option 1 — Clone Using Git

If Git is installed, clone the repository using:

Then open the project in **Visual Studio**.

### Option 2 — Download ZIP

1. Open the repository on GitHub.
2. Click **Code**.
3. Select **Download ZIP**.
4. Extract the downloaded ZIP file.
5. Open the solution file in **Visual Studio**.
6. Press **F5** or click **Start** to run the application.

---

## 📬 Connect

* 🌐 **GitHub:** [Sara Alterkawi](https://github.com/sara-alterkawi)
* 💼 **LinkedIn:** [Sara Alterkawi](https://www.linkedin.com/in/sara-alterkawi/)

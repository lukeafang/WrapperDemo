using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using External;

namespace WrapperDemo
{
    public partial class Form1 : Form
    {
        [DllImport("ExternalWrapper.dll")]
        private static extern string HelloWorld(string username);

        private External.Common _common;

        public Form1()
        {
            InitializeComponent();
            _common = new External.Common();
        }

        private void btnHelloWorld_Click(object sender, EventArgs e)
        {
            if (_common != null)
            {
                string outputString = _common.HelloWorld("World");
                MessageBox.Show(outputString);
            }
        }

        private void btnHelloWorld_Wrapper_Click(object sender, EventArgs e)
        {
            string result = HelloWorld("world");
            MessageBox.Show(result);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace External
{
    public class Common
    {
        public string HelloWorld(string username)
        {
            string outputMsg = String.Format("Hello, {0}!", username);
            return outputMsg;
        }
    }
}

using System ;
namespace IndexerApplication 
{
    class IndexedNames
    {
        private string [] namelist =new string [size ];
        static public int size =10;
        public IndexedNames()
        {
            for(int i=0;i<size;i++)
            {
                namelist[i] ="N.A.";

            }
        }
        public string this [int index]{
            get {
                string tmp;
                if (index>=0&&index<=size-1)
                {
                    tmp=namelist[index];

                }
                else tmp="";
                return (tmp);
            }
            set{
                if(index>=0&&index<=size-1)
                {
                    namelist [index]=value;

                }
            }
        }
        public int this [string name]{
            get {
                int index=0;
                while(index<size)
                {
                    if(namelist[index]==name )
                    {
                        return index;
                    }
                    index++;

                }return index;
            }
        }
        static void Main (string [] args){
            IndexedNames names=new IndexedNames();
            names[0]="sasr ";
            names[1]=" zhuliye";
            names[3]=" wanganshi";
            names[4]="wuyanzu ";
            names[5]="pengyuyan ";
            names[6]="sanbian";
            names[7]="quannazou ";
            for (int i=0;i<IndexedNames.size;i++)
            {
                Console.WriteLine(names[i]);
            }
            Console.WriteLine(names["sanbian"]);//string index if aim string exit ,return the Number of this string 
            Console.ReadKey();
        }
    }
}
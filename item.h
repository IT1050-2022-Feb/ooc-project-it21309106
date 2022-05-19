class Item
{
  private:
    int itemID;
    char IName[20];
    char IBrand[20];
    double Price;

  public:
    Item();
    Item(int iID, char iName[], char iBrand[], double price);
    void setItemDetails(int ID, char Name[], char Brand[], double Iprice);
    double getPrice();
    void displayItemDetails();
    ~Item();
};
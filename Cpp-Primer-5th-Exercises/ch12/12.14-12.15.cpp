void end_connection(connection*c)
{
    disconnection(*c);
}
void f()
{
    connection a;
    // shared_ptr<connection> p(make_shared<connection>(a),end_connection);
    // shared_ptr<connection> p(make_shared<connection>(a),[](connection*a){disconnection(*a);});
    shared_ptr<connection> p(&a,end_connection);
    shared_ptr<connection> q(&a,[](connection*c){disconnection(*c);});
}
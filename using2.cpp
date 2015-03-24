namespace blip {
	int bi = 15, bj = 14, bk = 23;
}
int bj = 0;
void manip()
{
	using namespace blip;
	++bi;
	++bj;
	++::bj;
	++blip::bj;
	int bk = 97;
	++bk;
}

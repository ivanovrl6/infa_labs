#include "MyForm.h"

using namespace noideas;
[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
}
#include "MyForm.h"

using namespace calcmatr;
[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
}
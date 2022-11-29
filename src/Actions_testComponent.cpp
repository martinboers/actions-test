#include "Actions_testComponent.hpp"
#include "Arp/Plc/Commons/Domain/PlcDomainProxy.hpp"
#include "Actions_testLibrary.hpp"

namespace Actions_test
{

using namespace Arp::Plc::Commons::Domain;

Actions_testComponent::Actions_testComponent(IApplication& application, const String& name)
: ComponentBase(application, ::Actions_test::Actions_testLibrary::GetInstance(), name, ComponentCategory::Custom)
, MetaComponentBase(::Actions_test::Actions_testLibrary::GetInstance().GetNamespace())
{
}

void Actions_testComponent::Initialize()
{
    // never remove next line
    PlcDomainProxy::GetInstance().RegisterComponent(*this, true);
    
    // subscribe events from the event system (Nm) here
}

void Actions_testComponent::SubscribeServices()
{
	// subscribe the services used by this component here
}

void Actions_testComponent::LoadSettings(const String& /*settingsPath*/)
{
	// load firmware settings here
}

void Actions_testComponent::SetupSettings()
{
    // never remove next line
    MetaComponentBase::SetupSettings();

	// setup firmware settings here
}

void Actions_testComponent::PublishServices()
{
	// publish the services of this component here
}

void Actions_testComponent::LoadConfig()
{
    // load project config here
}

void Actions_testComponent::SetupConfig()
{
    // setup project config here
}

void Actions_testComponent::ResetConfig()
{
    // implement this inverse to SetupConfig() and LoadConfig()
}

void Actions_testComponent::Dispose()
{
    // never remove next line
    MetaComponentBase::Dispose();

	// implement this inverse to SetupSettings(), LoadSettings() and Initialize()
}

void Actions_testComponent::PowerDown()
{
	// implement this only if data must be retained even on power down event
	// will work only for PLCnext controllers with an "Integrated uninterruptible power supply (UPS)"
	// Available with 2021.6 FW
}

} // end of namespace Actions_test

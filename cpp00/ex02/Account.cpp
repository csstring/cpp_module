#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void ){
		std::cout << "[19920104_091532] ";
	}
int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
		_displayTimestamp();
		std::cout << "accounts:"<<getNbAccounts()<<\
		";total:"<<getTotalAmount()<<";deposits:"<<\
		getNbDeposits()<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}
//fix
Account::Account( void )
{

}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" \
	<<initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
		<<_amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex <<";p_amount:"<<_amount<<\
	";deposit:"<< deposit <<";amount:"<< _amount + deposit<<";nb_deposits:"<<_nbDeposits<<std::endl;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal < 0 || checkAmount() < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex <<";p_amount:"<<_amount<<\
		";withdrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex <<";p_amount:"<<_amount<<\
	";withdrawal:"<< withdrawal <<";amount:"<< _amount - withdrawal <<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	_amount -= withdrawal;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex <<\
		";amount:"<<_amount<<";deposits:"<<\
		_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}
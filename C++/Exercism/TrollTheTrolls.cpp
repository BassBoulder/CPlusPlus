namespace hellmath {

    // TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
    // account types: `troll`, `guest`, `user`, and `mod`.

    enum class AccountStatus {
        troll,
        guest,
        user,
        mod
    };

    // TODO: Task 1 - Define an `Action` enumeration to represent the three
    // permission types: `read`, `write`, and `remove`.

    enum class Action {
        read,
        write,
        remove
    };

    // TODO: Task 2 - Implement the `display_post` function, that gets two arguments
    // of `AccountStatus` and returns a `bool`. The first argument is the status of
    // the poster, the second one is the status of the viewer.

    bool display_post(AccountStatus poster, enum AccountStatus viewer) {
        if (poster == AccountStatus::troll && viewer == AccountStatus::troll) {
            return true;
        }
        if (poster == AccountStatus::troll && viewer != AccountStatus::troll) {
            return false;
        }
        if (poster != AccountStatus::troll) {
            return true;
        }
        return 0;
    }

    // TODO: Task 3 - Implement the `permission_check` function, that takes an
    // `Action` as a first argument and an `AccountStatus` to check against. It
    // should return a `bool`.

    bool permission_check(Action action, AccountStatus account) {
        if (action == Action::read && (account == AccountStatus::guest || account == AccountStatus::user || account == AccountStatus::troll)) {
            return true;
        }
        if (action == Action::write && (account == AccountStatus::user || account == AccountStatus::troll)) {
            return true;
        }
        if (account == AccountStatus::mod) {
            return true;
        }
        return 0;
    }

    // TODO: Task 4 - Implement the `valid_player_combination` function that
    // checks if two players can join the same game. The function has two parameters
    // of type `AccountStatus` and returns a `bool`.

    bool valid_player_combination(AccountStatus playerOne, AccountStatus playerTwo) {
        if (playerOne == AccountStatus::guest || playerTwo == AccountStatus::guest) {
            return false;
        }
        if (playerOne == playerTwo) {
            return true;
        }
        if (playerOne == AccountStatus::user && (playerTwo == AccountStatus::user || playerTwo == AccountStatus::mod)) {
            return true;
        }
        if (playerOne == AccountStatus::mod && (playerTwo == AccountStatus::user || playerTwo == AccountStatus::mod)) {
            return true;
        }
        return 0;
    }

    // TODO: Task 5 - Implement the `has_priority` function that takes two
    // `AccountStatus` arguments and returns `true`, if and only if the first
    // account has a strictly higher priority than the second.
    bool has_priority(AccountStatus playerOne, AccountStatus playerTwo) {
        if (playerOne == AccountStatus::mod && playerTwo != AccountStatus::mod) {
            return true;
        }
        if (playerOne == AccountStatus::user && playerTwo != AccountStatus::mod && playerTwo != AccountStatus::user) {
            return true;
        }
        if (playerOne == AccountStatus::guest && playerTwo != AccountStatus::mod && playerTwo != AccountStatus::user && playerTwo != AccountStatus::guest) {
            return true;
        }
        return false;
    }
}  // namespace hellmath
#include "Person.h"

// TODO: Implement default constructor and parameterized constructor with validation.
Person::Person() : name_(""), id_(""), email_("") {}

// TODO: Implement default constructor and parameterized constructor with validation.
Person::Person(std::string name, std::string id, std::string email)
    : name_(std::move(name)), id_(std::move(id)), email_(std::move(email)) {
    if (name_.empty()) {
        throw std::invalid_argument("name cannot be empty");
    }
    if (id_.empty()) {
        throw std::invalid_argument("id cannot be empty");
    }
    if (email_.empty()) {
        throw std::invalid_argument("email cannot be empty");
    }
}

//TODO: Implement getName and setName methods.
const std::string& Person::getName() const noexcept { return name_; }
void Person::setName(const std::string& name) {
    if (name.empty()) {
        throw std::invalid_argument("name cannot be empty");
    }
    name_ = name;
}


// TODO: Implement getId and setId methods.
const std::string& Person::getId() const noexcept { return id_; }
void Person::setId(const std::string& id) {
    if (id.empty()) {
        throw std::invalid_argument("id cannot be empty");
    }
    id_ = id;
}

// TODO: Implement getEmail and setEmail methods.
const std::string& Person::getEmail() const noexcept { return email_; }
void Person::setEmail(const std::string& email) {
    if (email.empty()) {
        throw std::invalid_argument("email cannot be empty");
    }
    email_ = email;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << person.getName() << " (" << person.getId() << ")";
    return os;
}
